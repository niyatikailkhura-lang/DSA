class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
      int a=0; //here a is the previous house
      int b=0; //b is the the house before previous
      for(int i=0;i<n;i++){
        int x=max(a,b+nums[i]); //current house 
       
        b=a;
         a=x;
      }
      return a;
     
    }
};