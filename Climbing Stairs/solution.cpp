class Solution {
public:
    int climbStairs(int n) {
        int last_two = 1;
        int last_one = 1;
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }
        
        for (int i = 2; i <= n; ++i) {
            int sum = last_one + last_two;
            last_two = last_one;
            last_one = sum;
        }
        return last_one;
    }
};