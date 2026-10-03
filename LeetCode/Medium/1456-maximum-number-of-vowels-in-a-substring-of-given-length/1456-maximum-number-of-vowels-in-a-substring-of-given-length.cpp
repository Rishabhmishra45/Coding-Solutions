class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int right = k - 1;

        // First window
        int count = 0;
        for (int i = left; i <= right; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }
        int maxCount = count;
        // Slide window
        while (right + 1 < s.size()) {

            // Remove left character
            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                s[left] == 'o' || s[left] == 'u') {
                count--;
            }

            left++;
            right++;

            // Add new right character
            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
                s[right] == 'o' || s[right] == 'u') {
                count++;
            }

            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};