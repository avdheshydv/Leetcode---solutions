class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int prefix=0;
     int maximum=INT_MIN;
     for(int i=0; i<nums.size(); i++){
        prefix+=nums[i];
        maximum=max(prefix,maximum);
        if(prefix<0){
            prefix=0;
        }
     }
    return maximum;
    }
};