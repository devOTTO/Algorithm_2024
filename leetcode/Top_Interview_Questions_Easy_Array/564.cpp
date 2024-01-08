//
// Created by devOTTO on 2024-01-07.
//
//Leetcode - Top Intervie Questions - Easy - Array - Best Time to Buy and Sell Stock II
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for(int i = 0; i<prices.size() - 1; i++){
            if(prices[i+1] - prices[i] > 0){
                max += prices[i+1] - prices[i];
            }
        }
        return max;
    }
};
