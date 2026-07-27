class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int bestend=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=bestend+nums[i];
            bestend=max(v1,v2);
            res=max(bestend,res);
        }
        return res;
    }
};