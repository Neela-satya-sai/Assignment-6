#include <iostream>
#include<vector>

using namespace std;

int main()
{
     int n;
     cin>>n;
     vector<vector<int>> v(n,vector<int>(n));
     
     int top=0;
     int left=0;
     int bottom=n-1;
     int right=n-1;
     int direction=0;
     int value=0;
     
     while(top<=bottom && left <= right)
     {   if(direction==0)   // left to right
         {
             for(int col=left;col<=right;col++)
             {
                 v[top][col]=++value;
             }
             top++;
         }
         
         else if(direction==1)   // top to bottom
         {
             for(int row=top;row<=bottom;row++)
             {
                 v[row][right]=++value;
             }
             right--;
         }
         
         else if (direction==2)  // right to left
         {
             for(int col=right;col>=left;col--)
             {
                 v[bottom][col]=++value;
             }
             bottom--;
         }
         else                 // bottom to top
         {
             for(int row=bottom;row>=top;row--)
             {
                 v[row][left]=++value;
             }
             left++;
         }
         
         direction=(direction+1)%4;
     }
    cout<<"--------\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
