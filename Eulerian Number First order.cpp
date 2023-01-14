#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10,k=10;
    int pas[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)pas[i][j]=0;
    }
    for(int i=0;i<=n;i++)
    {
        pas[i][0]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i==j)
            {
                pas[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            pas[i][j]=(j+1)*pas[i-1][j]+(i-j)*pas[i-1][j-1];
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