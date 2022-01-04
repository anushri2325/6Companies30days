class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string, vector<string>> map;
        for(int i=0;i<string_list.size();i++)
        {
            string s = string_list[i];
            sort(s.begin(), s.end()); //using ascending order to make map keys
            map[s].push_back(string_list[i]);
        }
        vector<vector<string>> ans(map.size()); //we know row size only
        int index = 0;
        for(auto x:map)
        {
            auto v = x.second;
            for(int i=0;i<v.size();i++)
                ans[index].push_back(v[i]);
            index++;
        }
        return ans;
    }
    
};
