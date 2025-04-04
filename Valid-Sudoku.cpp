class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,int>m1,m2;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    m1[board[i][j]]++;
                    
                }
                if(m1[board[i][j]]>1)
                        return false;
                
            }
            
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    m2[board[j][i]]++;
                    
                }
                if(m2[board[j][i]]>1)
                        return false;
                
            }  
        }
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    unordered_map<char ,int>m;
                    for(int r=0;r<3;r++){
                        for(int c=0;c<3;c++){
                            if(board[i*3 +r][j*3+c]!='.'){
                                m[board[i*3 +r][j*3+c]]++;
                                if(m[board[i*3 +r][j*3 +c]]>1){
                                    return false;
                                }
                            }

                        }
                    }
                }
            }
        return true;
    }
};