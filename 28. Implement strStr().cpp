class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        if (needle.length() > haystack.length()) return -1;
        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            if (haystack[i] == needle[0]) {
                bool is_consistent = true;
                for (int j = 0; j < needle.length(); j++) {
                    if (haystack[i + j] != needle[j]) {
                        is_consistent = false;
                        break;
                    }
                }
                if (is_consistent) {
                    return i;
                }
            }
        }
        return -1;
    }
};