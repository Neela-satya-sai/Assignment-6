#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_map>


using namespace std;
bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<=2) return false;
        int i;
        for(i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                continue;
            }
            else break;
        }
        if(i==0 || i==n-1) return 0;
        for(int j=n-1;j>i;j--){
            if(arr[j]<arr[j-1]) continue;
            else return 0;
        }
        return 1;
    }
    
int main()
 {  //tell its amountain array or not;
    vector<int> arr={0,2,3,4,5,2,1,0};
    cout<<validMountainArray(arr);
    
     return 0;
}
