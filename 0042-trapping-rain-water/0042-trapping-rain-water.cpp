class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
      int leftmaximum=height[0];
      int rightmaximum=height[n-1];
      int start=1;
      int end=n-2;
     int ans=0;
      while(start<=end){
         leftmaximum=max(leftmaximum,height[start]);
         rightmaximum=max(rightmaximum,height[end]);

         if(leftmaximum<rightmaximum){
            ans+=leftmaximum-height[start];
            start++;
         }
         else{
            ans+=rightmaximum-height[end];
            end--;
         }

      }
      return ans;

    }
};