from itertools import repeat


class priorityq:
    def __init__(self, start, graph):
        self.queue = dict(zip(graph.keys(), repeat(float("+inf"))))
        self.queue[start] = 0
        self.visited = set()

    def __repr__(self):
        return "(" + ", ".join(f'"{i}": {self.queue[i]}' for i in sorted(self.queue, key=self.queue.get)) + ")"

    def update(self, newdistances, d_to_current_node):
        """
        A wrapper method to update the queue.
        But ensuring no visited nodes get added back.
        """
        self.queue.update({i:j + d_to_current_node for i, j in newdistances.items()
                                                            if i not in self.visited
                                                            and j + d_to_current_node < self.queue[i]})

    def next(self):
        """
        return a pair: the closest node to the current one
        and the distance to that node fromt he current one.
        ret: (node, distance)
        """
        node = min(self.queue, key=self.queue.get)
        distance = self.queue[node]
        del(self.queue[node])
        self.visited.add(node)
        return (node, distance)

    def is_empty(self):
        """
        Returns a boolean representing whether the queue is empty.
        if the queue is empty bool(self.queue) will return False,
        and it will return True otherwise, thus it is necessary to
        invert the value so it will return True if empty and False otherwise.
        """
        return not bool(self.queue)


def dijkstra(start, end, graph):
    """
    Returns the shortest path between the nodes start and end
    in the graph.
    Returns a the distance start->end.
    """
    queue = priorityq(start, graph)
    distance = 0
    while not queue.is_empty():
        node, distance = queue.next()
        queue.update(graph[node], distance)
        if node == end:
            break
    return distance
 

if __name__ == "__main__":
    graph1 = {
        "A": {"B": 7, "D": 3},
        "B": {"A": 7, "C": 3, "D": 2, "E": 6},
        "C": {"B": 3, "D": 4, "E": 1},
        "D": {"A": 3, "B": 2, "C": 4, "E": 7},
        "E": {"B": 6, "C": 1, "D": 7},
    }
    graph2 = {
        "A": {"B": 6, "D": 7, "E": 4},
        "B": {"A": 6, "C": 7, "D": 3, "F": 4, "G": 6},
        "C": {"B": 7, "F": 6, "G": 3},
        "D": {"A": 7, "B": 3, "E": 2, "F": 10},
        "E": {"A": 2, "D": 2},
        "F": {"B": 4, "C": 6, "D": 10, "G": 1},
        "G": {"B": 6, "C": 3, "F": 1},
    }
    start, end, graph = "A", "G", graph2
    distance = dijkstra(start, end, graph)
    print(f"Shortest route from {start} to {end} takes a distance {distance}")
