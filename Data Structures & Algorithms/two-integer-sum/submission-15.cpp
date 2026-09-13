class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {     
        unordered_map<int, int> hash_table;                 
        vector<int> target_indices;                         

        for (int i = 0; i < (int)nums.size(); i++) {      
            int second_int = target - nums[i];

            if (hash_table.find(second_int) != hash_table.end()) {
                                target_indices.push_back(hash_table.find(second_int)->second);
                                target_indices.push_back(i);
                return target_indices;                     
            }

            hash_table.insert({nums[i], i});               
        }

        return target_indices;                           
    }
};