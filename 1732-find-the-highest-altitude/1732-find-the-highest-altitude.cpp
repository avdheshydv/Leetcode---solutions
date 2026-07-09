class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int sum=0;
       int maximum=INT_MIN;

       for(int i=0; i<gain.size(); i++){
        sum+=gain[i];
       maximum=max(maximum,sum);
       }
       if(maximum<0){
        return 0;
       }
       return maximum;
    }
};