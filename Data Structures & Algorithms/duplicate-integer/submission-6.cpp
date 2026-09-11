class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
   // unordered_set<int> hash_table;
   // for ( int num : nums){ // for (int i=0; i < nums.size(); i++)  int num = nums [i]
   //     if (hash_table.count(num)) {
   //         return true;
   //     }
   //     hash_table.insert(num);
   // }
   // return false;
    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};
