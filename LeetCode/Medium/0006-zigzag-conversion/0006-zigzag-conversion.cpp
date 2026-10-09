class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) {
            return s;
        }

        vector<string> rows(numRows);
        int currRow = 0;
        int direction = -1;

        for (int i = 0; i < s.size(); i++) {
            rows[currRow] += s[i];

            if (currRow == 0 || currRow == numRows - 1) {
                direction = -direction;
            }

            currRow += direction;
        }

        string ans = "";

        for (int i = 0; i < numRows; i++) {
            ans += rows[i];
        }

        return ans;
    }
};