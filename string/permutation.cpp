#include<iostream>
#include<vector>

using namespace std;

void Swap(char & a, char & b) {
    char index;
    index = a;
    a = b;
    b = index;
}

void Permutation(vector <string> &vt,string a, int depth, int n, int r) {
    if (depth == r) {
       vt.push_back(a);
    }

    for (int i = depth; i < n; i++) {
        Swap(a[depth], a[i]);
        Permutation(vt,a, depth + 1, n, r);
        Swap(a[depth], a[i]);
    }
}
