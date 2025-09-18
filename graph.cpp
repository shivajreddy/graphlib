#include <bits/stdc++.h>
using namespace std;

class Graph {};

class UnDirectedGraph : public Graph {
private:
    vector<vector<bool>> adj_mat;

public:
    /** Un-Weighted Graph */
    using T_vpii = vector<pair<int, int>>;
    UnDirectedGraph(int n, const T_vpii& edges) {
        cout << "constructor - 1 : start" << endl;
        /* Example input: [{1, 2}, {1, 3}, {2, 4}] */
        // int n = edges.size();
        // build the adj matrix
        // vector<vector<bool>> adj_mat(n, vector<bool>(n, false));
        adj_mat.resize(n + 1, vector<bool>(n + 1, false));
        for (auto [u, v] : edges) {
            // u = u - 1, v = v - 1;
            cout << u << "," << v << endl;
            adj_mat[u][v] = true;
            adj_mat[v][u] = true;
        }
        cout << "construct - 1 : end" << endl;
    }

    void export_graphviz(const string& filename) {
        cout << "given file name:" << filename << endl;
        ofstream fout(filename);
        fout << "graph G {\n";
        int n = adj_mat.size();
        for (int u = 0; u < n; u++) {
            fout << " " << u << ";\n"; // declare nodes
            for (int v = u + 1; v < n; v++) {
                if (adj_mat[u][v]) fout << " " << u << " -- " << v << ";\n";
            }
        }
        fout << "}\n";
    }

    /** Weighted Graph */
    using T_vtiii = vector<tuple<int, int, int>>;
    UnDirectedGraph(T_vtiii edges) {
        int n = edges.size();
        // total_vertices = n;

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
