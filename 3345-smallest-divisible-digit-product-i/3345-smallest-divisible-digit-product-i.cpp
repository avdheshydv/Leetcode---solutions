class Solution {
public:
    int smallestNumber(int n, int t) {
        int i;
       for( i=n; ; i++){
        int product=1;
        int temp=i;
        while(temp!=0){
         int rem = temp%10;
          product= product*rem;
          temp=temp/10;
        }
      if(product%t ==0){
        break;
      }
       }
       return i;
    }
}; 