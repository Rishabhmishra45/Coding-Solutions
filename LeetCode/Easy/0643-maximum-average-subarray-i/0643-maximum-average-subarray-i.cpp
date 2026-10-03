class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int left = 0;
        int right = k - 1;

        // First window ka sum
        int sum = 0;

        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        // Slide window
        while (right + 1 < nums.size()) {

            // Purana element remove
            sum -= nums[left];

            // Window ko ek step right slide karo
            left++;
            right++;

            // Naya element add
            sum += nums[right];

            // Maximum sum update
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};