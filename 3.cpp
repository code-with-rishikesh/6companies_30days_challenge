class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = nums[0].size();
        vector <int > answer;

        for ( auto it:queries){
          int k=  it[0];
          int trim=it[1];
          priority_queue<pair<string,int>>pq;

          for (int i=0;i<nums.size();i++){
              string s=nums[i].substr(m-trim);
              pq.push({s,i});
              if(pq.size()>k) pq.pop();

          }
            int ans=pq.top().second;
            answer.push_back(ans);

        }
        return answer;
    }
};