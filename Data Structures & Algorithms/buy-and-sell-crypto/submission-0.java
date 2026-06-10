class Solution {
    public int maxProfit(int[] prices) {
        int minBuy = prices[0]; // initial min
        int maxProfit = 0;
        for (int i = 0; i < prices.length; i++) {
            maxProfit = Math.max(maxProfit, prices[i] - minBuy); // update if max >
            minBuy = Math.min(minBuy, prices[i]); // update min if new min
        }

        return maxProfit;
    }
}
