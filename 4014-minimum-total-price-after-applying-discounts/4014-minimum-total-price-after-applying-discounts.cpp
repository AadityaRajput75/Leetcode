class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int i=n-1,j=m-1;
        double sum=0;
       
        while(i>=0 && j>=0){
            double new_p=prices[i]*(100.0-discounts[j])/100.0;
            sum+=new_p;
            i--;
            j--;
        }
        while(i>=0){
            sum+=prices[i];
            i--;
        }
       
        
        return sum;
    }
};