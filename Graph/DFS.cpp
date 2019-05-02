#include <bits/stdc++.h>
#define MAXN 1000007

using namespace std;

vector<int> grafo[MAXN];
bitset<MAXN> vis;

void dfs(int node) {
    vis[node] = true;
    for(int i = 0; i < grafo[node].size(); i++) {
        if(!vis[grafo[node][i]]) {
            dfs(grafo[node][i]);
        }
    }
}
