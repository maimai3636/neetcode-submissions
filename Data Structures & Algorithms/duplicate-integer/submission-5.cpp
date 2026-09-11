class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> hash_table;
    for ( int num : nums){
        if (hash_table.count(num)) {
            return true;
        }
        hash_table.insert(num);
    }
    return false;
    }
};
