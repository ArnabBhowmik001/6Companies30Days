
class Solution {
public:
void findall( vector<vector<int>>& ans,int num,vector<int>& ds,int t,int k){
    if(t==0){
        if(ds.size()==k){
            ans.push_back(ds);
        
        }
        return;
    }
    for(int i=num;i<=9;i++){
        if(i>t)break;
        ds.push_back(i);
        findall(ans,i+1,ds,t-i,k);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<vector<int>> ans;
         vector<int> ds;
         findall(ans,1,ds,n,k);
         return ans;
    }
};