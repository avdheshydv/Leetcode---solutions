class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    int n= nums.size();
    map<int, int>map;

    for(int i=0; i<n; i++){
     map[nums[i]]++;
    }
    int missing=-1;
    int duplicate=-1;
    for(int i=1; i<=n; i++){
      if(map[i]==2){
        duplicate=i;
      }
      else if(map[i]==0){
        missing=i;
      }
    }
    return{duplicate,missing};
    }
};