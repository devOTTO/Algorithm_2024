//
// Created by devOTTO on 2024-01-15.
//
//Leetcode - Top Intervie Questions - Easy - Array - Two Sums
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; 
    }
};

