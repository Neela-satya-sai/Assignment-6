#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_map>


using namespace std;
vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        vector<int> ans;
        if(n%2){ //means odd length 
           return ans;
        }
        unordered_map<int,int> mp;
        for(int ele: changed){  //counting the frequency
             mp[ele]++;
        }
        sort(changed.begin(),changed.end());//because original ele comes first so,we can find it's double. if not we can't find double value of doubled ele.
        for(int ele:changed){
            if(mp[ele]==0) continue;
            if(mp[2*ele]==0){  //double ele not there
                return {};
            }
            if(mp[ele] && mp[2*ele]){
                ans.push_back(ele);
                mp[ele]--;
                mp[2*ele]--;
            } 

        }
        return ans;

    }

int main()
 {  
     vector<int> nums={1,6,8,4,2,3};
     vector<int> arr=findOriginalArray(nums);
     for(int i=0;i<arr.size();i++){
         cout<<arr[i]<<" ";
     }
    
     return 0;
}
