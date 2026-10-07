class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        // 1. Ignore leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Sign
        int sign = 1;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        // 3. Convert digits
        long long ans = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            ans = ans * 10 + digit;

            // 4. Overflow check
            if (sign == 1 && ans > 2147483647) {
                return 2147483647;
            }

            if (sign == -1 && -ans < -2147483648LL) {
                return -2147483648LL;
            }

            i++;
        }

        return (int)(sign * ans);
    }
};