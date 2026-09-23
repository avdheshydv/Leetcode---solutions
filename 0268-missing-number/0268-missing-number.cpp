
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing_num = 0;

        for (int num : nums) {
            missing_num ^= num;
        }

        for (int num = 0; num <= nums.size(); num++) {
            missing_num ^= num;
        }

        return missing_num;
    }
};