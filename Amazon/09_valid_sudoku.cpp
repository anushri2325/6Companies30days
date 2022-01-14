Problem Link : https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/

****************************************************************************************

class Solution{
public:
int isValid(vector<vector<int>> mat){
    unordered_set<string> seen;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(mat[i][j] != 0)
            {
                string temp1 = "row"+to_string(i) + to_string(mat[i][j]); 
                string temp2 = "col"+to_string(j) + to_string(mat[i][j]); 
                string temp3 = "box"+to_string((i/3)*3+j/3)+ to_string(mat[i][j]); 
                
                if(seen.find(temp1) != seen.end())
                return 0;
                
                if(seen.find(temp2) != seen.end())
                return 0;
                
                if(seen.find(temp3) != seen.end())
                return 0;
                
                seen.insert(temp1);
                seen.insert(temp2);
                seen.insert(temp3);
            }
        }
    }
    return 1;
}
};
