//based on professor Aman's and Professor Lisha's problem solving lectures
#include<iostream>
#include <sstream>
#include<vector>
#include<queue>
using namespace std;
void bfs(const Graph& graph, int src) {

    vector<bool> visited(graph.numVertices);

    // Creating a queue for BFS
    queue<int> q;

    // Marking the current node as visited and enqueue it
    visited[src] = true;
    q.push(src);

    while(!q.empty())
    {
        src = q.front();
        q.pop();
        cout << src << " ";

        for(int neighbor:graph.adjList[src])
        {
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

