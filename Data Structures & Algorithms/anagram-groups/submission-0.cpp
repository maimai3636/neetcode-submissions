class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash_table;
        vector <vector<string>> result;

        for (int i = 0; i < strs.size(); i++){ // for (string s : strs)
            string s = strs[i];
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            hash_table[sorted].push_back(s);
        }
        for (auto x : hash_table ){
            result.push_back(x.second);
        }
        return result;
        }
};
