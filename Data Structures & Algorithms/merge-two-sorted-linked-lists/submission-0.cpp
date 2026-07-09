/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
  * struct ListNode {
   *     int val;
    *     ListNode *next;
     *     ListNode() : val(0), next(nullptr) {}
      *     ListNode(int x) : val(x), next(nullptr) {}
       *     ListNode(int x, ListNode *next) : val(x), next(next) {}
        * };
         */

         class Solution {
         public:
             ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

                     // Create a dummy node to simplify merging
                             ListNode dummy(0);

                                     // 'node' always points to the last node
                                             // of the merged linked list
                                                     ListNode* node = &dummy;

                                                             // Traverse both linked lists until one becomes empty
                                                                     while (list1 && list2) {

                                                                                 // If current node of list1 is smaller,
                                                                                             // attach it to the merged list
                                                                                                         if (list1->val < list2->val) {
                                                                                                                         node->next = list1;
                                                                                                                                         list1 = list1->next;
                                                                                                                                                     }
                                                                                                                                                                 // Otherwise, attach current node of list2
                                                                                                                                                                             else {
                                                                                                                                                                                             node->next = list2;
                                                                                                                                                                                                             list2 = list2->next;
                                                                                                                                                                                                                         }

                                                                                                                                                                                                                                     // Move 'node' to the last node of the merged list
                                                                                                                                                                                                                                                 node = node->next;
                                                                                                                                                                                                                                                         }

                                                                                                                                                                                                                                                                 // Attach the remaining nodes of the non-empty list
                                                                                                                                                                                                                                                                         if (list1) {
                                                                                                                                                                                                                                                                                     node->next = list1;
                                                                                                                                                                                                                                                                                             } else {
                                                                                                                                                                                                                                                                                                         node->next = list2;
                                                                                                                                                                                                                                                                                                                 }

                                                                                                                                                                                                                                                                                                                         // The merged list starts after the dummy node
                                                                                                                                                                                                                                                                                                                                 return dummy.next;
                                                                                                                                                                                                                                                                                                                                     }
                                                                                                                                                                                                                                                                                                                                     };
