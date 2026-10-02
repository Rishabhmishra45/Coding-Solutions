class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Sabhi character ko count kiya
        for (char ch : s) {
            freq[ch]++;
        }

        // Find first unique character
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};