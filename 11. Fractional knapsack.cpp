#include <iostream>

using namespace std;

int main(){
    int sum=0,i,j,m,n,mark;
    double  flag[100]={0.0};

    cout<<"Enter no. of items : ";
    cin>>m;
    cout<<"Enter capacity : ";
    cin>>n;

    int profit[m],weight[m];
    double Max,Amount=0.0;  //Amonut  hold    the best    profit


    cout<<"Enter Weight :";
    for(i=1;i<=m;i++){
        cin>>weight[i];
    }

    cout<<"Enter Profit :";
    for(i=1;i<=m;i++){
        cin>>profit[i];
    }

    while(sum!=n){
        Max=(double)profit[1]/(double)weight[1] ;
        mark=1;
        for(j=2;j<=m;j++)
            if(((double)profit[j]/(double)weight[j])>= Max &&  flag[j]==0.0){
                Max=(double)profit[j]/(double)weight[j];
                mark=j;
            }
        if( n  >=  (sum+weight[mark])){
            sum=sum+weight[mark];
            flag[mark]=1;
        }
        else{
            int u;
            u=n-sum;
            sum=sum+u;
            flag[mark]=u/(double)weight[mark];

        }

    }
    for(i=1;i<=m;i++)
        cout<<i<<"  elements :  "<<flag[i]<<"    "<<endl;
    for(i=1;i<=m;i++){
        if(flag[i]!=0.0)
        Amount=Amount+(flag[i]*profit[i]);
    }
    cout<<"\nTotal_profit:    "<<Amount<<endl;
    return 0;
}
