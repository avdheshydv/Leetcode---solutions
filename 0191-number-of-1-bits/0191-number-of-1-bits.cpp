class Solution {
public:
    int hammingWeight(int n) {
 int sum=0;
  while(n!=0){
    int lastdigit=n &1;
    sum+=lastdigit;
    n=n>>1;
  }
  return sum;
    }
};