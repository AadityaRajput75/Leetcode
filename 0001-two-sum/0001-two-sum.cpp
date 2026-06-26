class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       map<int,int>mpp;
       vector<int>ans;
       for (int i=0;i<n;i++){
        int curr=nums[i];
        int more=target-curr;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[curr]=i;
       }
       return {-1,-1};
    }
};