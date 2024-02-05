class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentMin = prices[0];
        int maxProfit = 0;
        int i = 0;
        for(auto& element : prices){
            if(element < currentMin){
                currentMin = element;
            }else if(element - currentMin > maxProfit){
                maxProfit = element - currentMin;
            }
        }
        return maxProfit;
    }
};