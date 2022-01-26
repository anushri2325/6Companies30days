Problem Link : https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/

*******************************************************************************************

class Solution {
public:

    bool iscycle(int src, vector<bool>& visited, vector<bool>& recstack, vector<int> adj[]){
        if(visited[src] == false){
            visited[src] = true;
            recstack[src] = true;
            for(auto it : adj[src]){
                if(!visited[it] and iscycle(it,visited,recstack,adj)){
                    return true;
                }
                else{
                    if(recstack[it]){
                        return true;
                    }
                }
            }
        }
        recstack[src] = false;
        return false;
    }
    
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    vector<int> adj[N];
	    for(int i=0;i<pre.size();i++)
	    {
	        int u=pre[i].first;
	        int v=pre[i].second;
	        adj[u].push_back(v);
	    }
	     vector<bool>visited(N,false);
	    vector<bool>recstack(N,false);
	    for(int i=0; i<N; i++){
	        if(visited[i] == false){
	            if(iscycle(i,visited,recstack,adj)){
	                return false;
	            }
	        }
	    }
	    return true;
	}
};
