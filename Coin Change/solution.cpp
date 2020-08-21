class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> vec (amount + 1, -1);
        vec[0] = 0;
        for (int i = 0; i < coins.size(); ++i) {
            for (int j = 0; j < vec.size(); ++j) {
                if (coins[i] <= amount) {
                    int sum = j + coins[i];
                    int sum_count = vec[j] + 1;
                    if (sum <= amount && sum_count > 0) {
                        if (sum_count < vec[sum] || vec[sum] == -1) {
                            vec[sum] = sum_count;
                        }
                    }
                }
            }
        }
        
        return vec[amount];
    }
};