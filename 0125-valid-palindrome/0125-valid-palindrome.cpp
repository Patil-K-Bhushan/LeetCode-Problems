class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return tolower(c);
        });

        return isPalindrome(s, 0, s.length() - 1);
    }

private:
    bool isPalindrome(const string& s, int left, int right) {
        if (left >= right) {
            return true;
        }

        if (s[left] != s[right]) {
            return false;
        }

        return isPalindrome(s, left + 1, right - 1);
    }
};