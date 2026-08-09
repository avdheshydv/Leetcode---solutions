
class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {

            int start = 0;
            int end = words[i].length() - 1;
            bool check = true;

            while (start < end) {

                if (words[i][start] != words[i][end]) {
                    check = false;
                    break;
                }

                start++;
                end--;
            }

            if (check) {
                return words[i];
            }
        }

        return "";
    }
};