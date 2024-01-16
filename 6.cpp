class Solution {
    vector<string>ans;
    void generate(string &digits,vector<string>&stindex, string &s,int index){
        if ( index==digits.size()){ ans.push_back(s); return ;}        
  int x= digits[index]-'0';
            for(auto itr:stindex[x]){
                s+=itr;
                generate(digits,stindex,s,index+1);
                s.pop_back();
            }       
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return ans;
       vector<string> stindex={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       string s;
      generate(digits,stindex,s,0);
       return ans;
    }
};