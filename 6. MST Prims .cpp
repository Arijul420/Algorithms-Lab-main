#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key, cost;

    node (int x, int y)
    {
        key = x;
        cost = y;
    }
    bool operator<(node x) const
    {
        return cost < x.cost;
    }
};

vector<node> v[100];
int n, e;

int cost[100];
int parent[100];

priority_queue<node>pq;

int main()
{
    printf("Enter number of vertices and edges:");
    scanf("%d%d",&n,&e);

    for (int i = 1; i <= n; i++)
        cost[i] = INT_MAX;

    for (int i = 0; i < e; i++)
    {
        int x, y, c;
        printf("Enter starting point,ending point and weight:");
        scanf("%d%d%d",&x,&y,&c);
        v[x].push_back(node(y, c));
        v[y].push_back(node(x, c));
    }

    int s = 1;
    cost[s] = 0;

    pq.push(node(s, 0));

    while (!pq.empty())
    {
        node x = pq.top();
        pq.pop();

        for (int i = 0; i < v[x.key].size(); i++)
        {
            node u = v[x.key][i];
            if (u.cost < cost[u.key])
            {
                cost[u.key] = u.cost;
                pq.push(u);
                parent[u.key] = x.key;
            }
        }
    }
    printf("Minimum spanning tree is:");
    for (int i = 2; i <= n; i++)
    {
        printf("\nedge:%d->%d weight:%d",i,parent[i],cost[i]);

    }

    return 0;
}
