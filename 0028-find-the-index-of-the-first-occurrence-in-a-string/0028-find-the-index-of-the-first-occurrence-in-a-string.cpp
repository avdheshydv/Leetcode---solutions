
class Solution {
public:
    int strStr(string haystack, string needle) {

        // Case 1: needle empty
        if (needle.size() == 0)
            return 0;

        // Case 2: needle bigger than haystack
        if (needle.size() > haystack.size())
            return -1;

        for (int i = 0; i <= (int)(haystack.size() - needle.size()); i++) {
            if (haystack[i] == needle[0]) {
                if (haystack.substr(i, needle.size()) == needle) {
                    return i;
                }
            }
        }
        return -1;
    }
};
