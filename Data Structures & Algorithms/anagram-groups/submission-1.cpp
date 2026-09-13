class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash_table;
        vector <vector<string>> result;

        for (int i = 0; i < strs.size(); i++){ // for (string s : strs)
            string s = strs[i];
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            hash_table[sorted].push_back(s); // Không cần viết dài dòng:
                                            //if (hash_table.find(sorted) == hash_table.end()) {
                                            // hash_table[sorted] = vector<string>();}
        }
        for (auto &x : hash_table ){   //for(auto it = hash_table.begin();it != hash_table.end(); ++it)
            result.push_back(x.second); // result.push_back(it-> second);
        }
        return result;
        }
};
