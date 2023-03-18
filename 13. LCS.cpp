#include<bits/stdc++.h>
using namespace std;
int c[20][20];
char b[20][20];
char result[50];
int k=0;
void Print_LCS(char X[],int m,int n){
    if(m==0 || n==0)
        return;
    if(b[m][n]=='D'){
        Print_LCS(X,m-1,n-1);
        result[k++]=X[m-1];
    }
    else if(b[m][n]=='U'){
        Print_LCS(X,m-1,n);
    }
    else
        Print_LCS(X,m,n-1);
}

int LCS(char X[],char Y[],int m,int n){
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                c[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(X[i-1]==Y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='D';
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j]=c[i-1][j];
                b[i][j]='U';
            }
            else{
                c[i][j]=c[i][j-1];
                b[i][j]='L';
            }
        }
    }

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return c[m][n];

}

int main()
{
    char X[50],Y[50];
    int i=0;
    while(1){

        scanf("%c",&X[i]);
        if(X[i]=='\n'){
            X[i]='\0';
            break;
        }
        else
            i++;
    }
    int m=i;
    i=0;
    while(1){
        scanf("%c",&Y[i]);
        if(Y[i]=='\n'){
            Y[i]='\0';
            break;
        }
        else
            i++;
    }
    int n=i;

    int length=LCS(X,Y,m,n);
    Print_LCS(X,m,n);
    result[length]='\0';
    cout<<"LCS: ";
    for(int i=0;result[i]!='\0';i++){
        cout<<result[i];
    }
    cout<<endl;
    cout<<"Length: "<<length<<endl;
}
/*
ABCBDAB
BDCABA

*/
