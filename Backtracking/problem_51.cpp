class Solution {
public:
    vector<vector<string>>queens;
    int vis_column[9] = {0};
    int vis_rdiagonal[70] = {0};
    int vis_ldiagonal[70] = {0};
    
    void solve(vector<string>& v ,int row)
    {
        if(row == v.size())
        {
            queens.push_back(v);
        }
        else
        {
            for(int column = 0 ;column<v.size() ;column++)
            {
                if((vis_column[column] == 0) && (vis_rdiagonal[column+row] == 0 ) && (vis_ldiagonal[50+(column-row)] == 0))//cheak validation
                {
                    //do
                    vis_column[column] = 1;
                    v[row][column] = 'Q';
                    vis_rdiagonal[column+row] = 1;
                    vis_ldiagonal[50+(column-row)] = 1;
                    //recursion
                    solve(v ,row+1);
                    //undo
                    vis_column[column] = 0;
                    v[row][column] = '.';
                    vis_rdiagonal[column+row] = 0;
                    vis_ldiagonal[50+(column-row)] = 0;
                }
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
         string start="";
        for(int i=0;i<n;i++)
            start=start+(".");
        vector<string>v;
        v=vector<string>(n,start);
        solve(v ,0);
        return queens;
    }
};
