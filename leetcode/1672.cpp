//
// Created by devOTTO on 2024-01-02.
//
//Leetcode 1672 Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int max = 0;
        int sum = 0;
        for(int i = 0; i<m; i++)
        {
            sum = 0;    
            for(int j = 0; j<n; j++)
            {
                sum+= accounts[i][j];

            }
            if(sum > max)
            {
                max = sum;
            }
        }
        return max;
    }
    
};
