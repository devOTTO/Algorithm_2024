//
// Created by devOTTO on 2024-01-13.
//
//Leetcode - Top Intervie Questions - Easy - Array -  Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        digits[size-1]++;
        for(int i = size-1; i >= 0; i--){
            if(digits[i] == 10){
                digits[i] = 0;
                if(i != 0){
                    digits[i-1]++;
                }else{
                    digits.push_back(0);
                    digits[i] = 1;
                }             
            }        
        }           
       
        return digits;
    }
};

