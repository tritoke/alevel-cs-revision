#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DEBUG (false)

typedef struct graph_node {
  char name;
  struct graph_node ** neighbours;
  int num_neighbours;
} node;

void printnode(node * n) {
  printf("Node(name=%c, ", n->name);
  printf("num_neighbours=%d, neighbours=[", n->num_neighbours);
  int i;
  for (i = 0; i < n->num_neighbours-1; i++) {
    printf("%c, ", n->neighbours[i]->name);
  }
  printf("%c]);\n", n->neighbours[i]->name);
}

typedef struct tree {
  char val;
  struct tree * left;
  struct tree * right;
} tree;

void print_tree(tree * root) {
  printf("%c", root->val);
  if (root->left != NULL) {
    print_tree(root->left);
  } else if (root->right != NULL) {
    print_tree(root->right);
  }
}

tree * init_tree(char init) {
  tree * root = malloc(sizeof(tree));
  root->left = NULL;
  root->right = NULL;
  root->val = init;
  return root;
}

void add_node(tree * root, char val) {
  if (root->val == val) return;
  if (val < root->val) {
    if (root->left != NULL) {
      add_node(root->left, val);
    } else {
      tree * new = malloc(sizeof(tree));
      new->val = val;
      new->left = NULL;
      new->right = NULL;
      root->left = new;
    }
  } else {
    if (root->right != NULL) {
      add_node(root->right, val);
    } else {
      tree * new = malloc(sizeof(tree));
      new->val = val;
      new->left = NULL;
      new->right = NULL;
      root->right = new;
    }
  }
}

bool search_tree(tree * root, char val) {
  if DEBUG printf("searching for %c\n", val);

  if (root->val == val) {
    if DEBUG printf("%c found in root\n", val);
    return true;
  }
  if (root->left != NULL) {
    if (search_tree(root->left, val)) {
      if DEBUG printf("%c found in left\n", val);
      return true;
    }
  }
  if (root->right != NULL) {
    if (search_tree(root->right, val)) {
      if DEBUG printf("%c found in right\n", val);
      return true;
    }
  }
  if DEBUG printf("%c not found.\n", val);
  return false;
}

void free_tree(tree * root) {
  if (root->left != NULL) {
    free_tree(root->left);
  }
  if (root->right != NULL) {
    free_tree(root->right);
  }
  free(root);
}

void depthfirst(node * start) {
  printf("\nDepth first\n");
  tree * root = init_tree(start->name);

  void visit(tree * root, node * current) {
    printf("Visiting node %c\n", current->name);
    add_node(root, current->name);
    for (int i = 0; i < current->num_neighbours; i++) {
      if DEBUG printf("checking node %c\n", current->neighbours[i]->name);
      if (!search_tree(root, current->neighbours[i]->name))
        visit(root, current->neighbours[i]);
    }
  }

  visit(root, start);

  free_tree(root);
}

typedef struct list_node {
  node * item;
  struct list_node * next;;
} list_node;

list_node * init_list_node(node * item) {
  list_node * list = malloc(sizeof(list_node));
  list->item = item;
  list->next = NULL;
  return list;
}

typedef struct queue {
  list_node * head;
  list_node * tail;
} queue;

queue * init_queue(node * first) {
  queue * q = malloc(sizeof(queue));
  list_node * list = init_list_node(first);
  q->head = list;
  q->tail = list;
  return q;
}

bool is_empty(queue * q) {
  return (q->head == NULL);
}

void printqueue(queue * q) {
  if (q->head == NULL) return;
  printf("[");
  list_node * list = q->head;
  while ((list->next != NULL) & (list->next != q->tail)) {
    if DEBUG printf("\nlist->next:\t%lx\n", (unsigned long) list->next);
    if DEBUG printf("q->tail:\t%lx\n", (unsigned long) q->tail);
    //if DEBUG printf("<++>: %lx\n", (unsigned long) <++>);
    printf("\"%c\", ", list->item->name);
    list = list->next;
  }
  printf("\"%c\"]\n", list->item->name);
}

void enqueue(queue * q, node * n, tree * root) {
  /*
    firstly add the new node to the binary
    search tree so we don't add it again...
  */
  add_node(root, n->name);
  /* if the queue is empty then the re-initialize the queue */
  if (is_empty(q)) { 
    free(q);
    q = init_queue(n);
  } else {
    list_node * new = init_list_node(n);
    q->tail->next = new;
    q->tail = new;
  }
}

node * dequeue(queue * q) {
  if (is_empty(q)) return NULL;
  node * retnode = q->head->item;
  list_node * tofree = q->head;
  q->head = q->head->next;
  if (q->head == NULL) q->tail = NULL;
  free(tofree);
  return retnode;
}


void breadthfirst(node * start) {
  printf("\nBreadth first\n");
  queue * q = init_queue(start);
  tree * root = init_tree(start->name);

  do {
    node * current = dequeue(q);
    printf("Visiting node %c\n", current->name);
    for (int i = 0; i < current->num_neighbours; i++) {
      if (!search_tree(root, current->neighbours[i]->name)) {
        enqueue(q, current->neighbours[i], root);
      }
    }
  } while (!is_empty(q));

  free(q);
  free_tree(root);
}

typedef struct {
  node ** nodes;
  int num_nodes;
} graph;

graph * parse_nodes(char * fname) {
  FILE * fp;
  fp = fopen(fname, "r");
  graph * g = malloc(sizeof(graph));
  g->num_nodes = 0;
  for (char c = getc(fp); c != EOF; c = getc(fp))
    g->num_nodes += c == '\n';
  if DEBUG printf("num_nodes: %d\n", g->num_nodes);
  
  rewind(fp);

  g->nodes = malloc(g->num_nodes * sizeof(node *));

  for (int i = 0; i < g->num_nodes; i++) {
    g->nodes[i] = malloc(sizeof(node));
  }

  char * alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (int i = 0; i < g->num_nodes; i++) {
    if DEBUG printf("\nreading in node %d\n", i+1);
    g->nodes[i]->name = alphabet[getc(fp)-'1'];
    getc(fp);
    if DEBUG printf("name: %c\n", g->nodes[i]->name);
    fpos_t currpos;
    fgetpos(fp, &currpos);
    int num_neighbours = 0;
    char c = getc(fp);
    while (c != '\n') {
      num_neighbours++;
      c = getc(fp);
    } 
    g->nodes[i]->num_neighbours = num_neighbours;
    if DEBUG printf("node %c has %d neighbours\n", g->nodes[i]->name, g->nodes[i]->num_neighbours);
    fsetpos(fp, &currpos);
    g->nodes[i]->neighbours = malloc(num_neighbours * sizeof(node *));

    for (int j = 0; j < num_neighbours; j++) {
      char c = getc(fp);
      g->nodes[i]->neighbours[j] = g->nodes[c-'1'];
    }
    getc(fp);

    if DEBUG printf("finished reading in node: %c\n", g->nodes[i]->name);
  }

  fclose(fp);
  if (DEBUG) {
    for (int i = 0; i < g->num_nodes; i++) {
      printnode(g->nodes[i]);
    }
  }
  return g;
}

void free_graph(graph * g) {
  for (int i = 0; i < g->num_nodes; i++) {
    free(g->nodes[i]->neighbours);
    free(g->nodes[i]);
  }
  free(g->nodes);
  free(g);
}

int main(void) {
  graph * g = parse_nodes("graph.txt");

  depthfirst(g->nodes[0]);
  breadthfirst(g->nodes[0]);

  /* free allocated memory */
  if DEBUG printf("freeing memory\n");
  free_graph(g);
  return 0;
}
