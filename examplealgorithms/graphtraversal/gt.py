from collections import deque


def breadthfirst(graph):
    print("\nBreadth first")
    def visit(graph, node, queue, visited):
        print(f"Visiting node {node}")
        queue.extend(i for i in graph[node] if i not in queue and i not in visited)
        visited.append(node)
        return queue, visited

    queue = deque([*graph.keys()][0])
    visited = []
    while queue:
        queue, visited = visit(graph, queue.popleft(), queue, visited)
    return visited


def depthfirst(graph):
    print("\nDepth first")
    def visit(graph, node, visited):
        print(f"Visiting node {node}")
        for i in graph[node]:
            if i not in visited:
                visited.append(i)
                visited = visit(graph, i, visited)
            
        return visited

    first = [*graph.keys()][0]
    visited = visit(graph, first, [first])
    return visited


if __name__ == "__main__":
    graph = {
        "A": ["B", "D", "E"],
        "B": ["A", "C", "D"],
        "C": ["B", "G"],
        "D": ["A", "B", "E", "F"],
        "E": ["A", "D"],
        "F": ["D"],
        "G": ["C"],
    }
    depthfirst(graph)
    breadthfirst(graph)
