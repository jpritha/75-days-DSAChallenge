                //    MOORE'S VOTING ALGORITHM    //

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 , majority = 0;
        
        for(auto& num : nums){
            if(count == 0){
                majority = num;
            }
            if(num == majority){
                count++;
            }
            else{
                count--;
            }
        }
        
        count = 0;                             
        for(int& it : nums){                                            
            if(it == majority){
                count++;                                // FOR CASES LIKE :
            }                                      //  8 5 1 9  : No Majority Element
        }
        if(count > floor(nums.size()/2)){    
            return majority;
        }
        return -1;
    }
};