#include<bits/stdc++.h>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
int i, w;
int K[n+1][W+1];

for (i = 0; i <= n; i++)
{
	for (w = 0; w <= W; w++)
	{
		if (i==0 || w==0)
			K[i][w] = 0;
		else if (wt[i-1] <= w)
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
		else
				K[i][w] = K[i-1][w];
	}
}
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            cout<<K[i][j]<<"  ";
        }
        cout<<endl;
    }
        int temp = W;
        cout<<"these weight contribute:     ";
        for (int i = n; i > 0 && temp > 0; i--)  {

            if (K[i][temp] == K[i - 1][temp]) {
                continue;
            } else {
                cout<<wt[i - 1]<< ",";
                temp -= wt[i - 1];
            }
        }
cout<<endl;

return K[n][W];
}

int main()
{
	int val[] = { 3, 4,5,6};
	int wt[] = {2,3, 4, 5};
	int W = 5;
	int n = sizeof(val)/sizeof(val[0]);
	cout<< knapSack(W, wt, val, n);
	return 0;
}
