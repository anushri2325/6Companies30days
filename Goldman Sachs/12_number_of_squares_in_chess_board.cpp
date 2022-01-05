Problem Link:  https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

**************************************************************************************************

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        if(N==1)
            return 1;
        else
            return (N*N)+squaresInChessBoard(N-1);
    }
};
