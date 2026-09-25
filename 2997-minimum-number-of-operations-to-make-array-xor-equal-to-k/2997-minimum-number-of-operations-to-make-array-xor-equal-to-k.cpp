class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans=ans^nums[i];
        }
        int digit=ans^k;
        int count=0;
        while(digit!=0){
         count=count+(digit&1);
         digit=digit>>1;
        }
        return count;
    }
};