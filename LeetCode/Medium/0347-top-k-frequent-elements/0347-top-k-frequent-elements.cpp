class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        // Frequency count
        for (int x : nums) {
            mp[x]++;
        }

        // Store number and frequency
        vector<pair<int, int>> p;
        for (auto i : mp) {
            p.push_back({i.first, i.second});
        }

        // Short the value in desending order
        sort(p.begin(), p.end(),[](auto& a, auto& b) 
        { 
            return a.second > b.second; 
        });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(p[i].first);
        }
        return ans;
    }
};