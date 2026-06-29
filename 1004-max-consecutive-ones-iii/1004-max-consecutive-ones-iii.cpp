class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=0,zeroc=0;
        int ans=INT_MIN;
        for(high=0;high<n;high++){
            if(nums[high]==0)zeroc++;

            while(zeroc>k){
                if(nums[low]==0)zeroc--;
                low++;
            }
            int len=high-low+1;
            ans=max(len,ans);
        }
        return ans;
    }
};