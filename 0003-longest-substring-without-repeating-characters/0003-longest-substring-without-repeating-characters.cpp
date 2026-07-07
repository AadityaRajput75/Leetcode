class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int>mpp;
       int n=s.size();
       int low=0;
       int high=0;
       int res=INT_MIN;
       for(high=0;high<n;high++){
        mpp[s[high]]++;
        
        while(mpp[s[high]]>1){
            mpp[s[low]]--;
            if (mpp[s[low]] == 0) {
                    mpp.erase(s[low]);
                }
            low++;
        }
        res=max(res,high-low+1);

       }
       if(res==INT_MIN){
        return 0;
       }
       return res;
    }
};