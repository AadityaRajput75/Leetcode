class Solution {
public:
    int minsum(vector<int>nums){
        int n=nums.size();
        int mini=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            mini=min(nums[i],mini+nums[i]);
            ans=min(ans,mini);
        }
        return ans;
        

    }

    int maxsum(vector<int>nums){
        int n=nums.size();
        int maxi=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            maxi=max(nums[i],maxi+nums[i]);
            ans=max(ans,maxi);
        }
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int mini=minsum(nums);
        int maxi=maxsum(nums);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int circ=sum-mini;
        if(maxi<0){
            return maxi;
        }
        return max(circ,maxi);

    }
};