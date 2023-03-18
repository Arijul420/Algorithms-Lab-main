#include <bits/stdc++.h>
using namespace std;
#define INF 99999999
#define V 4
int res;
int visited[V];

void TSP(int matrix[V][V], int currPos, int cnt, int cost){
    if (cnt == V && matrix[currPos][0]){
        res = min(res, cost + matrix[currPos][0]);
        return;
    }

    for (int i = 0; i < V; i++){
        if (visited[i]==false && matrix[currPos][i]){
            visited[i] = true;
            TSP(matrix, i, cnt+1, cost+matrix[currPos][i]);
            visited[i] = false;
        }
    }
};

int main(){
    int matrix[V][V] ={
        {0 ,10,15,20},
        {5 ,0 ,9 ,10},
        {6 ,13,0 ,12},
        {8 ,8 ,9 ,0 }
    };


    for (int i = 0; i < V; i++){
        visited[i] = false;
    }

    visited[0] = true;
    res = INF;

    TSP(matrix, 0, 1, 0);

    cout <<"\nMinimum Length Visited: " << res <<endl;

    return 0;
}
