#include<bits/stdc++.h>
#define MAXN 1000007

using namespace std;

int parent[MAXN], sz[MAXN];

int find(int a) {
    if(a == parent[a]) return a;

    return parent[a] = find(parent[a]);
}

void join(int a, int b) {
    int parentA = find(a);
    int parentB = find(b);
    if(parentA == parentB) return;

    if(sz[parentA] < sz[parentB]) {
        parent[parentA] = parentB;
        sz[parentB] += sz[parentA];
    }
    else {
        parent[parentB] = parentA;
        sz[parentA] += sz[parentB];
    }
}
