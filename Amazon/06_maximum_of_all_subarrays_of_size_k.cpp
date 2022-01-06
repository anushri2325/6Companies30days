Problem Link : https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
Solution Explanation : https://youtu.be/xFJXtB5vSmM

***************************************************************************************
// SLIDING WINDOW
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
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
