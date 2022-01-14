Problem Link : https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/

*************************************************************************************

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        while(head)
        {
            int tempM=M;
            while(head && --tempM)
                head=head->next;
            int tempN=N;
            Node *prev = head;
            while(head && tempN--)
                head=head->next;
            if(prev)
            {
                head = head ? head->next : NULL;
                prev -> next = head;
            }
        }
    }
};
