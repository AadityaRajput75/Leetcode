class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i]*maxi;
            int v2=nums[i]*mini;
            int v3=nums[i];
            mini=min(v3,min(v1,v2));
            maxi=max(v3,max(v1,v2));
            res=max(res,max(mini,maxi));
        }
        return res;
    }
};