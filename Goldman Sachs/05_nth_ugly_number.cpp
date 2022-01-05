Problem Link:  https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/.

********************************************************************************

class Solution{
public:	
	ull getNthUglyNo(int n) {
	    set<long long> possible;
    	possible.insert(1);
    	long long ans;
        while(n--){
            auto it = possible.begin();
            ans = *it;
            possible.erase(it);
            possible.insert(ans*2);
            possible.insert(ans*3);
            possible.insert(ans*5);
        }
        return ans;
    }
};
