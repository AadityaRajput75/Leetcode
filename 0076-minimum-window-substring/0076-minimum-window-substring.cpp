class Solution {
public:
    bool chk(vector<int>&have,vector<int>&need){
        for(int i=0;i<256;i++)
            if(have[i]<need[i]){
                return false;
            }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        vector<int>have(256,0);
        vector<int>need(256,0);
        if(m>n){
            return "";
        }
        for(int i=0;i<m;i++){
            need[t[i]]++;
        }
        int start=-1;
        int low=0,high=0,res=INT_MAX;
        for(high=0;high<n;high++){
            have[s[high]]++;
            while(chk(have,need)){
                int len=high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }

        }
        if(res==INT_MAX){
            return "";
        }
        return s.substr(start,res);
        
    }
};