#include <vector>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int numCoins = 0;
        int dp[12][10005] = {0};
        for (int i = coins.size() - 1; i >= 0; --i) {
            numCoins  += amount / coins.at(i);
            amount %= coins.at(i);
        }
        return amount? -1: numCoins;
    }
};