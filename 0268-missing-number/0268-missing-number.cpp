class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int diff=0;
        for(int i=0; i<nums.size(); i++){
         diff=diff+nums[i];
        }
         int sum= n*(n+1)/2;
        int temp= sum-diff;
        return temp;
    }
};