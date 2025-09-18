#include <bits/stdc++.h>
using namespace std;

class Graph {
protected:
    int total_vertices;
};

class UnDirectedGraph : public Graph {
public:
    /** Un-Weighted Graph */
    using T_vpii = vector<pair<int, int>>;
    UnDirectedGraph(T_vpii edges) {
        /* Example input: [{1, 2}, {1, 3}, {2, 4}] */
        int n = edges.size();
        total_vertices = n;
        // build the adj matrix
        vector<vector<bool>> adj_mat(n, vector<bool>(n, false));
        for (auto [u, v] : edges) {
            adj_mat[u][v] = true;
            adj_mat[v][u] = true;
        }
    }

    /** Weighted Graph */
    using T_vtiii = vector<tuple<int, int, int>>;
    UnDirectedGraph(T_vtiii edges) {
        int n = edges.size();
        total_vertices = n;

        // [u1 : [{v1,w1}, {v2,w2},...], u2 : [], ... ]
        vector<vector<pair<int, int>>> adj(n);

        for (auto [u, v, w] : edges) {
            adj[u].push_back({ v, w });
            adj[v].push_back({ u, w });
        }
    }

    UnDirectedGraph(string data) {
        // create an adj list
    }
};

class DirectedGraph : public Graph {
protected:
    vector<vector<pair<int, int>>> adj;

public:
    using T_vpii = vector<pair<int, int>>;
    DirectedGraph(T_vpii edges) {
    }

    using T_vtiii = vector<tuple<int, int, int>>;
    DirectedGraph(T_vtiii data) {
    }
};
