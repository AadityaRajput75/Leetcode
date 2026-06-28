class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int res=INT_MIN;
        map<int,int>mpp;
        int low=0,high=0;
        for(high=0;high<n;high++){
            mpp[fruits[high]]++;
            while(mpp.size()>2){
                mpp[fruits[low]]--;
               
                if(mpp[fruits[low]]==0){
                    mpp.erase(fruits[low]);
                }
                low++;
            }
            if(mpp.size()==2 || mpp.size()<2){
                int len=high-low+1;
                res=max(len,res);
            }
        }
        if(res==INT_MIN){
            return -1;
        }
        return res;
    }
};