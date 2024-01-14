//
// Created by devOTTO on 2024-01-14.
//
//Leetcode - Top Intervie Questions - Easy - Array - Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int size = nums.size();
        int i = 0, j = 0;
        while(i<size && j<size){
            if(nums[i] != 0) i++;
            if(nums[j] == 0) j++;
            
            if((i<size && j < size) && (i<j)){
                swap(nums[i], nums[j]);

            }
            j++;
                
        }
      
    }
};
