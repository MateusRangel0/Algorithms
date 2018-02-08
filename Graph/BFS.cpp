#include<bits/stdc++.h>
#define MAXN 1000007

using namespace std;

vector<int> grafo[MAXN];
bitset<MAXN> vis;
int dist[MAXN];

void bfs(int no) {
    queue<int> q;
    q.push(no);
    vis[no] = true;
    dist[no] = 0;
    while(!q.empty()) {
        int top = q.front();
        q.pop();

        for(int i = 0; i < grafo[top].size(); i++) {
            if(!vis[grafo[top][i]]) {
                dist[grafo[top][i]] = dist[top] + 1;
                vis[grafo[top][i]] = true;
                q.push(grafo[top][i]);
            }
        }
    }
}
