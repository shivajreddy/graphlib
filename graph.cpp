/*

   Graph -> [direct, undirect] -> [weighted, unweighted]

   1. input: {1, 2, 3}, {2, 3, 2}
   2. input: "[1, 2, 3], [2, 1, 3]"
*/

#include <utility>
#include <vector>
using std::vector;
#include <string>
using std::pair;
using std::string;
using std::tuple;

// UNWEIGHTED GRAPH
class Graph {
protected:
    int total_vertices;

    vector<vector<int>> adj;

public:
    /** Data in the shape of Vec<pair<int,int>> */
    Graph(vector<pair<int, int>> edges) { // unweighted graph, bidirectional
        int n = edges.size();

        // build the adj list
        adj.resize(n);
        for (auto [u, v] : edges) adj[u].push_back(v);
    }

    /** Data in the shape of Vec<tuple<int, int, int>> */
    Graph(vector<tuple<int, int, int>> data) { // weighted graph
    }

    Graph(string data) {
        // create an adj list
        // decide if this is weighted or unweighted
    }
};

class UnDirectedGraph : public Graph {
protected:
    vector<vector<int>> adj;
};

class DirectedGraph : public Graph {
protected:
    vector<vector<pair<int, int>>> adj;
};
