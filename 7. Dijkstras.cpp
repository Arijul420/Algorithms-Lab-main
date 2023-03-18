#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;

int V=5;
int isVisited[5];

vector<pair<int, int>>dist(V,make_pair(INF,-1));


void addEdge(vector<pair<int,int>>adj[],int u, int v,int wt)
{
    adj[u].push_back(make_pair(v,wt));
}

void printPath(int V,int j)
{
    if(dist[j].second==-1)
    {
        return;
    }
    printPath(V,dist[j].second);
    printf("%d ->",dist[j].second);
}


void shortestPath(vector<pair<int,int>>adj[],int V,int src)
{
    priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int, int>>>pq;

    vector<pair<int, int>>::iterator it;
    dist[src].first=0;
    pq.push(make_pair(0,src));
    int c=0;
    while(!pq.empty())
    {
        int u=pq.top().second;
        c++;

        if(isVisited[u]==0)
        {
            for(auto x : adj[u])
            {
                int v=x.first;
                int weight=x.second;

                if(dist[v].first>(dist[u].first+weight))
                {
                    dist[v].first=dist[u].first+weight;
                    dist[v].second=u;
                    pq.push(make_pair(dist[v].first, v));

                }
            }
        }
        isVisited[u]==1;
        pq.pop();

    }

    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i].first);

    cout<<endl;

    for(int i=0; i<V; i++){
        printf("%d :: ",i);
        printPath(V,i);
        printf("%d \n",i);

    }
}


int main()
{

    vector<iPair> adj[V];

    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 2, 5);
    addEdge(adj, 1, 2, 2);
    addEdge(adj, 1, 3, 1);
    addEdge(adj, 2, 1, 3);
    addEdge(adj, 2, 3, 9);
    addEdge(adj, 2, 4, 2);
    addEdge(adj, 3, 4, 4);
    addEdge(adj, 4, 3, 6);
    addEdge(adj, 4, 0, 7);

    shortestPath(adj, V, 0);

    return 0;
}
