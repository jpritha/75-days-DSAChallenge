#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;        
        int row = matrix.size() , col = matrix[0].size() , direction = 1;
        
        int top = 0 , bottom = row-1 ;
        int left = 0 , right = col-1 ;
        
        while(left <= right && top <= bottom){
            
            if(direction == 1){                         //Left to Right Column
                for(int i=left; i<=right; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
                direction = 2;
            } 
            
            else if(direction == 2){                    //Top to Bottom Column
                for(int i=top; i<=bottom; i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
                direction = 3;
            }
            
            else if(direction == 3){                    //Right to Left Column
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                direction = 4;
            }
            
            else if(direction == 4){                    //Bottom to Top Column
                for(int i=bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
                direction = 1;
            }
        }
        return ans;
    }
};