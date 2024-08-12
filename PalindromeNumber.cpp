class Solution {
public:
    bool isPalindrome(int x) {
        long long digit, rev = 0;
        long long num = x;
        if (num < 0)
        {
            return false;
        }
        do {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        } while (num != 0);
        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
