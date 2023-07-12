/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> multply(vector<vector<int>> arr1,vector<vector<int>> arr2,int m,int n,int p,int q)
{   vector<vector<int>> ans(m,vector<int>(q));
    
    for(int i=0;i<m;i++)    // considering arr1 as row matrix
    {
        for(int j=0;j<q;j++)  //considering  arr2 as column matrix
        {   int sum=0;
            for(int k=0;k<n;k++)    //you can take size of this loop n or p.
            {
               sum+=arr1[i][k]*arr2[k][j]; 
            }
            ans[i][j]=sum;
        }
    }
    return ans;
}

int main()
{  
    int m,n,p,q;      // for multipling two matrix, condition is n==p.
    cout<<"enter arr1 m and n";   //and resulent matrix of size (m)x(q)
    cin>>m>>n;
    vector<vector<int>> arr1(m,vector<int>(n));
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"enter arr2 p and q";
    cin>>p>>q;
    vector<vector<int>> arr2(p,vector<int>(q));
    
     for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"--------\n";
    vector<vector<int>> ans=multply(arr1,arr2,m,n,p,q);
    
     for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
