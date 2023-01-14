#include<bits/stdc++.h>
using namespace std;
int k=11;
int max=400;
int main()
{
    int n=11,k=11;
    int pas[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=k;j++)pas[i][j]=0;
    }
    for(int i=0;i<=n;i++)
    {
        pas[i][0]=1;
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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            pas[i][j]=pas[i-1][j]+pas[i-1][j-1];
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