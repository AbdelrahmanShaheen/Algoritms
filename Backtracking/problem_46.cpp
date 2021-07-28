class Solution {
public:
    vector<vector<int>>result;
    int vis[6] = {};
    void solve(vector<int>& nums ,int k ,vector<int>& res)
    {
        if(k == nums.size()) //base case.
        {
            result.push_back(res);
        }
        else
        {
            for(int i=0 ;i<res.size() ;i++)
            {
                if(vis[i] != 1)
                {
                    res[k] = nums[i];
                    vis[i] = 1;  //do
                    solve(nums ,k+1 ,res); //recursion.
                    vis[i] = 0; //undo 
                }
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>res(nums.size()); 
        solve(nums ,0 ,res);
        return result;
    }
};
