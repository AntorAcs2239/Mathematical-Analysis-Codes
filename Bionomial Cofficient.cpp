// Program about Passcal Triangle using Binomial Cofficient
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter the Value of row and column"<<endl;
    cin>>row>>column;
    row--;
    column--;
    int pascal[row+1][column+1];
    //Base Cases 
    for(int i=0;i<=row;i++)
    {
        for(int j=1;j<=column;j++)pascal[i][j]=0;
    }
    for(int i=0;i<=row;i++)
    {
        pascal[i][0]=1;
    }
    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<=column;j++)
        {
            if(i==j)
            {
                pascal[i][j]=1;
            }
        }
    }
    //Base Cases 


    // calculate All other values of matrix
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
    }
    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
    int q;
    cout<<"Enter the number of query"<<endl;
    cin>>q;
    while(q--)
    {
        int n,r;
        cout<<"Enter the value of n and r to find n_c_r"<<endl;
        cin>>n>>r;
        cout<<"Value of n_c_r is: "<<pascal[n][r]<<endl;
    }
    cin>>q;


}