#include<bits/stdc++.h>
using namespace std;

struct edge{
    int startp,endp,weight;

    edge(int _startp,int _endp,int _weight){
        startp=_startp;
        endp=_endp;
        weight=_weight;
    }
};

vector<edge>edges;

int p[100];
bool cmp(edge a,edge b);
int root(int x);

void kruskal(int e);

int main(){
    int e;
    printf("Enter number of edges:");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        printf("Enter starting point ending point and weight of edge:");
        int x,y,w;
        scanf("%d%d%d",&x,&y,&w);
        edges.push_back(edge(x,y,w));
        p[x]=x;
        p[y]=y;
    }
    sort(edges.begin(),edges.end(),cmp);
    kruskal(e);
}


bool cmp(edge a,edge b){
    return a.weight<b.weight;
}

int root(int x){
    if(p[x]==x)
        return x;
    return root(p[x]);

}

void kruskal(int e){
    int mini_cost=0;
    printf("Minimum Spanning Tree: \n");

    for(int i=0;i<e;i++){

        int startp_root=root(edges[i].startp);
        int endp_root=root(edges[i].endp);
        int cost=edges[i].weight;

        if(startp_root!=endp_root){
            printf("starting point:%d ending point:%d weight:%d\n",edges[i].startp,edges[i].endp,edges[i].weight);
            mini_cost+=cost;
            p[startp_root]=p[endp_root];
        }
    }
    printf("Minimum Cost : %d",mini_cost);
}
