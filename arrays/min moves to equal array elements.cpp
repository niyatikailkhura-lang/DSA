//Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

//In one move, you can increment n - 1 elements of the array by 1.

 
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
         int mini=nums[0];
        for(int i=1;i<n;i++){
            mini=min(mini,nums[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+(nums[i]-mini);
        }
        return ans;
    }
};