class Solution {
public:
    int getSum(int a, int b) {
        int sum = 0;
        int i = 1;
        int carry = 0;
        for (int j = 0; j < 32; ++j) {
            int a_bit = a & 1;
            int b_bit = b & 1;
            if (a_bit & b_bit & carry) {
                carry = 1;
                sum = sum | (1 << j);
            } else if (a_bit & b_bit || a_bit & carry || b_bit & carry) {
                carry = 1;
            } else if (a_bit | b_bit | carry) {
                carry = 0;
                sum = sum | (1 << j);
            } else {
                carry = 0;
            }
            a = a >> 1;
            b = b >> 1;
        }

        return sum;
    }
};