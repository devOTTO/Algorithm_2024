//
// Created by devOTTO on 2024-01-01.
//
//Leetcode 876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* point1 = head;
        ListNode* point2 = head;

        while(point1 != NULL && point2 != NULL&& point2 -> next != NULL){
            point1 = point1->next;
            point2 = point2 -> next -> next;
        }
        return point1;
    }
};
