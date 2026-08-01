class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int start=0;
        int end=skill.size()-1;
        int sum=0;
        long long sumall=0;

        while(start<end){
         sum=skill[start]+skill[end];
          sumall+=skill[start]*skill[end];
         start++;
         end--;
         if(skill[start]+skill[end]!=sum){
           return -1;
         }
        }
        return sumall;
    }
};