class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        int kLargest;
        for (int i = 0; i < k; i++) {
            kLargest = 0;
            kLargest = nums[i];
        }
        return kLargest;
    }
};