Problem Link : https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

****************************************************************************************************************

class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> visit(26,0);
		    vector<char> order;
		    string ans="";
		    int n=A.length();
		    for(int i=0;i<n;i++)
		    {
		        if(!visit[A[i]-'a'])
		            order.push_back(A[i]);
		        visit[A[i]-'a']++;
		        int f=0;
		        int m= order.size();
		        for(int j=0;j<m;j++)
		        {
		            if(visit[order[j]-'a']==1)
		            {
		                ans.push_back(order[j]);
		                f=1;
		                break;
		            }
		        }
		        if(f==0)
		            ans.push_back('#');
		    }
		    return ans;
		}

};
