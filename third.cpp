#include<bits/stdc++.h>
using namespace std;

int knapSack(int w, int wt[], int val[], int n)
{
   vector<vector<int>>dp(n+1,vector<int>(w+1,0));
   if(n==0 || w==0)
   dp[n][w]=0;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=w;j++)
       {
           if(wt[i-1]>j)
           dp[i][j]=dp[i-1][j];
           else if(wt[i-1]<=j)
           dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
       }
   }
   return dp[n][w];
}
int main()
{
        int n, w;
        cin>>n>>w;
        int val[n],wt[n];
        for(int i=0;i<n;i++)
            cin>>val[i];
        for(int i=0;i<n;i++)
            cin>>wt[i];
        cout<<knapSack(w, wt, val, n)<<endl;

    return 0;
}
