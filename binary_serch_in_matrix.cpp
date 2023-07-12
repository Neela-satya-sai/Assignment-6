#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_map>


using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int x) {
       int m=matrix.size();
       int n=matrix[0].size();
       int lo=0;
       int hi=m*n-1;

       while(lo<=hi)
       {
           int mid=lo+(hi-lo)/2;
           if(matrix[mid/n][mid%n]==x) return true;
           else if(matrix[mid/n][mid%n]<x)  lo=mid+1;
           else  hi=mid-1;
       }
       return false;
       
    }   
int main()
 {  
    vector<vector<int>> matrix={{1,3,5},{10,11,16},{23,30,34}};
    int target=11;
    cout<<searchMatrix(matrix,target);
    
     return 0;
}
