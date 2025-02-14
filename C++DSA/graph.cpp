#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph {
public:
    int V; // Number of vertices

    // Adjacency list representation
    vector<list<int>> adj;

    Graph(int V) {
        this->V = V;
        adj.resize(V); // Initialize adjacency list
    }

    // Add an undirected edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v); // For undirected graph
    }

    // Print the adjacency list representation of the graph
    void printGraph() {
        for (int v = 0; v < V; ++v) {
            cout << "Adjacency list of vertex " << v << ":\n";
            for (auto x : adj[v]) {
                cout << " -> " << x;
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Print the adjacency list representation
    g.printGraph();

    return 0;
}