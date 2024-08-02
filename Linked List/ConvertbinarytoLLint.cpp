class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>arr;
        ListNode *curr=head;
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int n=arr.size();
        int b=0;
        for(int i=0;i<arr.size();i++){
            b+=(arr[i]*pow(2,n-1));
            n--;
        }
        return b;
    }
};
