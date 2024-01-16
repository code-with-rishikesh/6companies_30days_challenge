class Solution {
    vector<vector<int >>ans ;
    void solve (int sum,int sizes,vector<int>&v,int tempsum,int index){
        if(index==10){
            if(v.size()==sizes&&tempsum==sum){
                ans.push_back(v);
                return;
            }
            return;
        }
        v.push_back(index);
        tempsum+=index;
        solve (sum,sizes,v,tempsum,index+1);
        v.pop_back();
        tempsum-=index;
        solve (sum,sizes,v,tempsum,index+1);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;

        solve (n,k,v,0,1);
        return ans ;
    }
};