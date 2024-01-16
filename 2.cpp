class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<string>ans;
        unordered_map<string,vector<int>>mp;
        for (int i=0;i<access_times.size();i++){
           mp[access_times[i][0]].push_back(stoi(access_times[i][1]));
        }
        for(auto it:mp){
            sort(it.second.begin(),it.second.end());
            if(it.second.size()==1)continue;
           for(int i=0;i<it.second.size()-2;i++){
               if(it.second[i+2]-it.second[i]<100) {ans.push_back(it.first);break;}
               
           }
        }
        return ans;
    }
};