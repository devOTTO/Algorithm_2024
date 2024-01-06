//
// Created by devOTTO on 2024-01-06.
//
//Leetcode 383. Ransom Note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int j = 0;
        int count = 0;

        for(int i = 0; i<magazine.length(); i++)
        {
            if(ransomNote[j] == magazine[i])
            {
                count++;
                j++;
            }
            
        }
        return (count == ransomNote.size()); 
    }
};
