
class Solution {
public:

    vector<int> beautifulArray(int n) {

        if (n == 1)
            return {1};

        vector<int> odd;
        vector<int> even;

    
        vector<int> left = beautifulArray((n + 1) / 2);
        vector<int> right = beautifulArray(n / 2);

        
        for (int x : left) {
            odd.push_back(2 * x - 1);
        }

    
        for (int x : right) {
            even.push_back(2 * x);
        }


        odd.insert(odd.end(), even.begin(), even.end());

        return odd;
    }
};