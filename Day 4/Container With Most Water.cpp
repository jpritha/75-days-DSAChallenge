#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        
        int l = 0, r = height.size()-1;
        
        while(l < r){
            int ht = min(height[l] , height[r]);

            int area = ht * (r - l);           //width = r - l
            
            maxwater = max(maxwater, area);
            
            if(height[l] < height[r]){
                l++;
            }
            else if(height[l] > height[r]){
                r--;
            }
            else{
                l++; r--;
            }
        }
        return maxwater;
    }
};