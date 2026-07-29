class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=nums[i]+maxi;
            int v3=nums[i]+mini;
            maxi=max(v1,max(v2,v3));
            mini=min(v1,min(v2,v3));
            res = max(res, max(abs(maxi), abs(mini)));
            
        }
        return abs(res);

        
    }
};