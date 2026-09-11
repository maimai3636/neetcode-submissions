class Solution{
    public:

     vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indices;
        unordered_map<int, int> hash_table;

        for (int i = 0; i < (int)nums.size(); i++) {
            int second_target = target - nums[i];

            if (hash_table.find(second_target) != hash_table.end()) {
                
                target_indices.push_back(hash_table.find(second_target)->second);
                target_indices.push_back(i);
                return target_indices;
            }

            hash_table[nums[i]] = i;   
        }

        return target_indices;
    }
};