#include<bits/stdc++.h>
#define N 5
using namespace std;


bool safe(int board[N][N],int i,int col){
    for(int j=0;j<col;j++){
        if(board[i][j]==1)
            return false;
    }
    int rowtemp=i-1;
    int coloumntemp=col-1;
    for(int j=0;;j++){
        if(rowtemp==-1 || coloumntemp==-1)
            break;
        if(board[rowtemp][coloumntemp]==1)
            return false;
        rowtemp--;
        coloumntemp--;
    }

    rowtemp=i+1;
    coloumntemp=col-1;
    for(int j=0;;j++){
        if(rowtemp>=N || coloumntemp==-1)
            break;
        if(board[rowtemp][coloumntemp]==1)
            return false;
        rowtemp++;
        coloumntemp--;
    }

    return true;
}


bool FindPlace(int board[N][N], int col){
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++){
        if ( safe(board, i, col) ){
            board[i][col] = 1;
            if (FindPlace(board, col + 1) == true)
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}

int main(){

    int board[N][N];
    memset(board,0,sizeof(board));

    if(FindPlace(board, 0)==false){
        cout<<"Not Possible"<<endl;
        return 0;
    }


    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }

}

