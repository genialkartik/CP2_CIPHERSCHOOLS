class Solution {
public:
    string longestCommonpfx(vector<string>& strs) {
        string pfx="";
        if(strs.size()==0)  return pfx;
        for(int i=0; i<strs[0].size(); i++){
            for(int j=1; j<strs.size() && strs[j].size()>i; j++){
                if(strs[j][i]!=strs[0][i])
                    return pfx;
            }
            if(j==strs.size()) pfx+=strs[0][i];
        }
        return pfx;  
    }
};
