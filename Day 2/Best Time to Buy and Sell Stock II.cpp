#include<bits/stdc++.h>
using namespace std;

    int maxProfit(vector<int> &prices) {
        int profit = 0;
        
        for (int i = 1; i < prices.size(); ++i){
            
            if(prices[i] > prices[i-1]){
                
              profit += (prices[i] - prices[i-1]);
            }   
        }
      
        return profit;
    }
};

/*----> multiple transactions are made
Whenever we face a profit we add tht profit                 */