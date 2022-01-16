Problem Link : https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/

********************************************************************************************

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    //transpose
    int row = matrix.size(), col = matrix[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //swapping rows
    int i = 0, j = row - 1;
    while(i < j){
        swap(matrix[i],matrix[j]);
        i++;
        j--;
    }
    
}
