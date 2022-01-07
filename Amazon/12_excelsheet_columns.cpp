Problem Link: https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/

***************************************************************************************

class Solution{
    public:
    string colName (long long int n)
    {
        string ans = "";
        while(n)
        {
            char last = (n-1)%26 +'A';
            ans = last+ans;
            n = (n-1)/26;
        }
        return ans;
    }
};
