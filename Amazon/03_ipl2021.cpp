Problem Link : https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/


// Absolutely same as question 2
*********************************************************************************************************

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector <int> ans;
        deque <int> dq;
        int i=0, j=0;
        while(j<n)
        {
            // elements smaller than element to be inserted are useless
            while( dq.size()>0 && dq.back() < arr[j])
                dq.pop_back();
               
            dq.push_back(arr[j]);
            if(j-i+1 == k)
            {
                ans.push_back(dq.front());
                if(arr[i] == dq.front())
                    dq.pop_front();
                i++;
                j++;
            }
            else
                j++;
        }
        return ans;
    }
};
