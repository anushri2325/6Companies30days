Problem Link : https://leetcode.com/problems/longest-mountain-in-array/

*************************************************************************

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3)return 0;
        int ans=0,i=0;
        bool peak=false;
        bool valley=false;
        while(i<arr.size()-1)
        {
            if(arr[i]<arr[i+1])
            {
                int start=i;
                //next is also peak
                while(i<arr.size()-1 && arr[i]<arr[i+1])
                {
                    i++;
                    peak=true;
                }
                //valley
                while(i<arr.size()-1 && arr[i]>arr[i+1])
                {
                    i++;
                    valley=true;
                }
                //mountain
                if(peak==true && valley==true)
                {
                    ans= max(ans,i-start+1);
                }
                peak=false;
                valley=false;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
