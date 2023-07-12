#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_map>


using namespace std;
int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;
            if(sum==0){
                maxlen=i+1;
            }
            else if(mp.find(sum)!=mp.end()){ //means encounterd sum again
                 maxlen=max(maxlen,i-mp[sum]);
            }
            else mp[sum]=i;
        }
        return maxlen;
    }
    
int main()
 {  //continues max sub array length
    vector<int> arr={0,1,1,1,0,0,0,1,0};
    cout<<findMaxLength(arr);
    
     return 0;
}
