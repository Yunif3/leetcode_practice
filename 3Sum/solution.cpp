class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answers;
        for (int i = 0; i < nums.size(); ++i) {
            if (i - 1 >= 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            unordered_set<int> set;
            for (int j = i + 1; j < nums.size(); ++j) {
                if (set.count(-nums[i] - nums[j])) {
                    vector<int> comb = {nums[i], nums[j], -nums[i] - nums[j]};
                    answers.push_back(comb);
                    while(j+1 < nums.size() && nums[j] == nums[j+1]) {
                        ++j;
                    }
                }
                set.insert(nums[j]);
            }
        }
        return answers;
    }
};