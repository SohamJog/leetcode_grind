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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        ListNode* ans = nullptr;
        ListNode* curr = nullptr;
        

        while (true) {
            //cout<< "hiha"<<endl;
            if (curr != nullptr) {
                cout<<curr->val<<endl;
            }
            int leastValue = 1e9;
            int leastIndex = -1;
            bool ok = false;
            for (int i = 0; i < lists.size(); i ++) {

                if(lists[i] != nullptr) {
                    ok = true;
                }
                else {
                    continue;
                }

                if (leastValue >= lists[i] ->  val) {
                    leastValue = lists[i] -> val;
                    leastIndex = i;
                }
            }
            if (!ok) {
                break;
            }
            ListNode* newNode = new ListNode(leastValue);
            if (ans == nullptr) {
                ans = newNode;
                curr = newNode;
            } else {
                curr->next = newNode;
                curr = newNode;
            }
            lists[leastIndex] = lists[leastIndex]->next;
            
        }
        
        return ans;
    }
};
