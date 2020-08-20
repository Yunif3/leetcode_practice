class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> bits = {0};
        int last_index = 0;
        int comb = 1;
        for (int i = 1; i <= num; ++i) {
            if (bits.size() == comb * 2) {
                last_index = 0;
                comb = comb * 2;
            }
            bits.push_back(bits[last_index] + 1);
            ++last_index;
        }
        return bits;
    }
};