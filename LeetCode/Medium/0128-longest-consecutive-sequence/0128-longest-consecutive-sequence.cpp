class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp.insert(nums[i]);
        }
        int longest = 0;

        for (int x : mp) {
            // Check if x is the starting point
            if (mp.find(x - 1) == mp.end()) {
                int current = x;
                int count = 1;

                // Count consecutive numbers
                while (mp.find(current + 1) != mp.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};