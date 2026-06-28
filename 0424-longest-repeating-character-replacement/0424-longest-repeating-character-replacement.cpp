class Solution {
public:
    int max_arr(vector<int>& a){
        int maxi=INT_MIN;
        for(int i=0;i<256;i++){
            maxi=max(maxi,a[i]);
        }
        return maxi;
        
    }
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int>f(256,0);
        int low=0,high=0,res=INT_MIN;
        for(high=0;high<n;high++){
            f[s[high]]++;
            int maxn=max_arr(f);
            int len=high-low+1;
            int diff=len-maxn;
            while(k<diff){
                f[s[low]]--;
                
                low++;
                maxn=max_arr(f);
                len=high-low+1;
                diff=len-maxn;
            }
            len=high-low+1;
            res=max(len,res);
        }
        if(res==INT_MIN){
            return 0;
        }
        return res;
        
    }
};