class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int low=0,high=0;
        map<char,int>mpp;
        int res=INT_MIN;
        for(high=0;high<n;high++){
            mpp[s[high]]++;
            
            while(mpp[s[high]]>1){
                mpp[s[low]]--;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
                low++;
            }
            int k=high-low+1;
           
            res=max(k,res);
            
            
        
        }
        if(res==INT_MIN){
            return 0;
        }
        return res;

    }
};