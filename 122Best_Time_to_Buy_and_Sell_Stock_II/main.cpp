class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        // Start from the first day, and look for opportunities to buy and sell
        for(int i = 1; i < prices.size(); i++) {
            // If selling today is profitable (price higher than yesterday), do the transaction
            if(prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        // The sum of all profitable transactions is the max profit
        return maxProfit;
    }
};