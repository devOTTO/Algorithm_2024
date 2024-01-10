//
// Created by devOTTO on 2024-01-10.
//
//Leetcode - Top Intervie Questions - Easy - Array - Contains Duplicate
// 1. First Solution
// I thought about making temp HashMap
// Time Complexity : O(n)
// Space Complexity : O(n)
// 2. Second Solution (Picked)
// Time Complexity : O(nlogn) 
// Space Complexity : O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool result = false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1]) {
                result = true;
                break;
            }
            
        }
        return result;
    }
};
