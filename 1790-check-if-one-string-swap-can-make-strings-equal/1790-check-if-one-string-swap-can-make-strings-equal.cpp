class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.length();
        if(s1==s2){
            return true;
        }
        int diff=0;
        int firstidx=0;
        int secondidx=0;

        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                diff++;
                if(diff>2){
                    return false;
                }
                else if(diff==1){
                    firstidx=i;
                }
                else{
                    secondidx=i;
                }
            }
        }
         if(diff!=2){
        return false;
         }
        swap(s1[firstidx], s1[secondidx]);
        if(s1==s2){
            return true;
        }
        return false;
    }
};