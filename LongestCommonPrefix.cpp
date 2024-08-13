class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];
        for (int i = 0; i < min((strs[0]).length(), (strs[n-1]).length()); i++)
        {
           if (first[i] != last[i])
           {
            return ans;
           }
           else 
           {
             ans = ans + first[i];
           }
        }
        return ans;
    }
};
