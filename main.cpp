#include <bits/stdc++.h>

using namespace std;

template <typename T> T add(T a, T b) {
    return a + b;
}

int main() {
    int res1 = add(5, 3);        // T is int
    double res2 = add(2.5, 1.7); // T is double
    cout << res1 << " " << res2 << endl;
    return 0;
}
