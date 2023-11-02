class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX;
        int maxx = INT_MIN;
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<minn)
            {
                minn = prices[i];
            }
            if(maxx<(prices[i]-minn))
            {
                maxx=prices[i]-minn;
            }
        }
        return maxx;
    }
};