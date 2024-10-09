class Solution {
public:
    
void solve(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&upperdiag,vector<int>&lowerdiag,vector<int>&leftrow,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        // check fxn
        if(leftrow[row]==0 && lowerdiag[row+col]==0 && upperdiag[n-1+col-row]==0){
            board[row][col]='Q';
            upperdiag[n-1+col-row]=1;
            lowerdiag[row+col]=1;
            leftrow[row]=1;
            solve(col+1,board,ans,upperdiag,lowerdiag,leftrow,n);

             board[row][col]='.';
            upperdiag[n-1+col-row]=0;
            lowerdiag[row+col]=0;
            leftrow[row]=0;


        }

        }
    }
    vector<vector<string>> solveNQueens(int n) {
   
    vector<vector<string>>ans;
    string r="";
    vector<string>board;
    for(int i=0;i<n;i++){
        r+='.';
    }
    for(int i=0;i<n;i++){
        board.push_back(r);
    }
    vector<int>left(n,0);
    vector<int>upperdiag(2*n -1);
        vector<int>lowerdiag(2*n -1);




   solve(0,board,ans,upperdiag,lowerdiag,left,n);
   return ans;

    }
};


