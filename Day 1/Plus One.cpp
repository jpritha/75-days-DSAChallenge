#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for(int i=n-1; i>=0; i--){
            
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i] += 1;   //digit is not 9 so we can safely increment by one
                return digits;
            }
        }
        
        // where it is all 9  : ex = 999 will have answer = 1000
        digits.push_back(0);
        digits[0] = 1;
        
        return digits;
    }
};
