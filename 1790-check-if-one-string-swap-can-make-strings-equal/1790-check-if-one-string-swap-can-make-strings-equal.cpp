class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      int n= s1.length();
      if(s1==s2){
        return true;
      }
      int diff=0;
      int first=0;
      int second=0;
      for(int i=0; i<n; i++){
        if(s1[i]!=s2[i]){
            diff++;
          if(diff>2){
            return false;
          }
          else if(diff==1){
            first=i;
          }
          else{
            second=i;
          }
        }
    }
      if(diff!=2){
        return false;
      }
      int temp=s1[first];
      s1[first]=s1[second];
      s1[second]=temp;
      if(s1==s2){
        return true;
      }
      return false;
    }
};