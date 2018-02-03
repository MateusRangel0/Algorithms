#include <bits/stdc++.h>
#define MAXN 1000007

using namespace std;

vector<int> grafo[MAXN];
bitset<MAXN> vis;

void dfs(int no) {
    vis[no] = true;
    for(int i = 0; i < grafo[no].size(); i++) {
        if(!vis[grafo][i]) {
            dfs(grafo[no][i]);
        }
    }
}
