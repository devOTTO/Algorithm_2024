//
// Created by devOTTO on 2024-01-04.
//
//Leetcode 1342. Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(true){
            if(num == 0)
            {
                break;
            }
            if(num % 2 ==0)
            {
                num /= 2; 
            }
            else{
                num -= 1;
            }
            count++;
        }
        return count;
    }
};
