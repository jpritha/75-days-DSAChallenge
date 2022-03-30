#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, count = 0;
        
        unordered_map<int,int> mp;              //<sum, exist or not exist>
        
        mp[sum] = 1;                            // for the first subarray whose sum = k , we already put it in map
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            
            if(mp.find(sum - k) != mp.end()){                    //if sum-k is present, the k is also                                                           present in sum
                count += mp[sum - k];
            }

            mp[sum]++;
        }
        return count;
    }
};