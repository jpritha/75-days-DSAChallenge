#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;           //lsf = Least So Far : that is minimum so far
        int pist = 0;                //pist = Profit If Sold Today
        int max_profit = 0;
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            
            max_profit = max(max_profit , pist);
        }
        
        return max_profit;
    }
};