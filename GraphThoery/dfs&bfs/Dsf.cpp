#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
input 
9 9
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
1 2 4 3 6 7 9 8 5
*/
int vertices, edges;
vector<int> adj[MAX];
bool visited[MAX];

void init() {
    cin >> vertices >> edges;
    for(int i=1; i<=edges; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void DFS(int n) {
    cout << n << " ";
    visited[n]=true;
    for(auto it:adj[n]) {
        if(!visited[it]) {
            DFS(it);
        }
    }
}

int main() {
init();
DFS(1);
return 0;
}