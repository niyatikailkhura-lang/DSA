//Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

//In one move, you can increment or decrement an element of the array by 1

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        int num=nums[n/2];
        for(int i=0;i<n;i++){
            ans=ans+(abs(nums[i]-num));
        }
        return ans;
    }
};