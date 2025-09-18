#include "graph.cpp"

int main() {
    cout << "CREATING" << endl;
    vector<pair<int, int>> edges = { { 1, 2 }, { 1, 3 }, { 2, 4 } };
    UnDirectedGraph ug = UnDirectedGraph(4, edges);
    ug.export_graphviz("t1.dot");
    cout << "DONE" << endl;
}
