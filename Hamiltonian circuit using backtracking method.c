#include <stdio.h>

#define V 5

bool isSafe(int graph[V][V], int path[], int pos) {
    if (graph[path[pos-1]][path[pos]] == 0) return false;
    for (int i = 0; i < pos; i++) {
        if (path[i] == path[pos]) return false;
    }
    return true;
}

bool hamCycleUtil(int graph[V][V], int path[], int pos) {
    if (pos == V) return graph[path[pos-1]][path[0]] == 1;
    
    for (int v = 1; v < V; v++) {
        if (isSafe(graph, path, pos)) {
            path[pos] = v;
            if (hamCycleUtil(graph, path, pos + 1)) return true;
            path[pos] = -1;
        }
    }
    return false;
}

void findHamiltonianCircuit(int graph[V][V]) {
    int path[V] = {0};
    for (int i = 1; i < V; i++) path[i] = -1;
    
    if (hamCycleUtil(graph, path, 1)) {
        for (int i = 0; i < V; i++) printf("%d ", path[i]);
        printf("%d\n", path[0]);
    } else {
        printf("No Hamiltonian Circuit found\n");
    }
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 0, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 1, 1, 1, 0}
    };
    findHamiltonianCircuit(graph);
    return 0;
}
