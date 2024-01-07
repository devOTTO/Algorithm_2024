//
// Created by devOTTO on 2024-01-07.
//
//Leetcode - Top Intervie Questions - Easy - Array - Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size < 1) return 0;
        
        int left = 0;
        int count = 1;

        for(int i = 1; i<size; i++)
        {
            if(nums[left] != nums[i]){
                left++;
                nums[left] = nums[i];
                count++;
            }
        }
        return count;
    }
};
