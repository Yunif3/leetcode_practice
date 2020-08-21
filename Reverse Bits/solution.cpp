class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;
        uint32_t mask = 1 << 31;
        for (int i = 0; i < 32; ++i) {
            uint32_t bit = (n & (mask >> i)) ? 1 : 0;
            reversed = reversed | (bit << i);
        }
        return reversed;
    }
};