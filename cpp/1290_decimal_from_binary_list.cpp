int getDecimalValue(ListNode* head) {
        int ans = 0;
        while(head){
            ans = ans*2 + head->val;
            head = head->next;
        }
        
        return ans;
    }