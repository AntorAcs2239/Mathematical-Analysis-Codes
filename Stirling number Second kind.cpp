#include<bits/stdc++.h>
using namespace std;
int k=1;
int main()
{
    int n=10,k=10;
    int pas[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)pas[i][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        pas[i][1]=1;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(i==j)
            {
                pas[i][j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=k;j++)
        {
            pas[i][j]=j*pas[i-1][j]+pas[i-1][j-1];
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<pas[i][j]<<" ";
        }
        cout<<endl;
    }

}