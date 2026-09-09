
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minimum=INT_MAX;
       int maxprofit=0;

       for(int i=1; i<prices.size(); i++){
      minimum=min(minimum, prices[i-1]);
      int profit=prices[i]-minimum;
      maxprofit=max(maxprofit,profit);

       }
       return maxprofit;
    }
};