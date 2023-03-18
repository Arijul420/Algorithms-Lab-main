#include<bits/stdc++.h>
using namespace std;
#define inf 999999
int main()
{
    int n,e;
    cout<<"Enter the number of nodes and edges:";
    cin>>n>>e;
    int dis[100][100];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++){
            if (i == j)
                dis[i][j] = 0;
            else
                dis[i][j] = inf;
        }
    }

    int a,b,w;

    for(int i=0;i<e;i++){
        cin>>a>>b>>w;
        dis[a][b]=w;
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++){
                if(i!=j)
                {
                    dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
                }
            }
        }
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<< i << " " << j << " ";
            if (dis[i][j] == inf)
                cout << "INF\n";
            else
                cout << dis[i][j] << "\n";
        }
    }
    return 0;
}
