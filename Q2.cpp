class Solution {
public:
    void calc(int idx,int k,int n,vector<vector<int>>&ans,vector<int>&v,int sum){
        //BASE CASE
        if(sum==n && k==0){
            ans.push_back(v);
            return;
        }
        //General Case
        if(sum>n)
            return;
        for(int i=idx;i<=9;i++){
            if(i>n)
                break;
            v.push_back(i);
            calc(i+1,k-1,n,ans,v,sum+i);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;
        calc(1,k,n,ans,v,0);
        return ans;
    }
};
