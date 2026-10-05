class Solution {
public:
    vector<int> topKFrequent(const vector<int>& nums, int k){
    unordered_map<int, int> freq;
    for(int x: nums){
        freq[x]++;
    }

     vector<pair<int, int>> items;
    for (const auto& [value, cnt] : freq) {
      items.push_back({value,cnt});
}

 sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

vector<int> result;
for( int i= 0; i < k; i++){
    result.push_back(items[i].first);
}
return result;
}
};
