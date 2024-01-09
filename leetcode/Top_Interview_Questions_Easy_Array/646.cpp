//
// Created by devOTTO on 2024-01-09.
//
//Leetcode - Top Intervie Questions - Easy - Array - Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size(); //heap 터진거 방지 // size 오버해서 돌지 않도록

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
