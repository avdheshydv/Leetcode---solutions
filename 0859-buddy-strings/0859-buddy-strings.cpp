class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();

        if (s.length() != goal.length()) {
            return false;
        }

        if (s == goal) {
            int freq[26] = {0};

            for (int i = 0; i < n; i++) {
                freq[s[i] - 'a']++;

                if (freq[s[i] - 'a'] > 1) {
                    return true;
                }
            }

            return false;
        }

        int diff = 0;
        int firstidx = 0;
        int secondidx = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] != goal[i]) {
                diff++;

                if (diff > 2) {
                    return false;
                }
                else if (diff == 1) {
                    firstidx = i;
                }
                else {
                    secondidx = i;
                }
            }
        }

        if (diff != 2) {
            return false;
        }

        swap(s[firstidx], s[secondidx]);

        return s == goal;
    }
};
