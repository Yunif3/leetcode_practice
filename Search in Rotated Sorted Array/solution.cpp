class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = min_finder(nums, 0, nums.size() - 1);
        int first = helper(nums, target, 0, min - 1);
        int second = helper(nums, target, min, nums.size() - 1);
        if (first != -1) { return first; }
        if (second != -1) { return second; }
        return -1;
    }
    
    int min_finder(vector<int>& nums, int start, int end) {
        if (start == end) {
            return start;
        }
        int middle = (start + end) / 2;
        if (nums[middle] > nums[end]) {
            return min_finder(nums, middle + 1, end);
        } else {
            return min_finder(nums, start, middle);
        }
    }
    
    int helper(vector<int>& nums, int target, int start, int end) {
        if (end < start) {
            return -1;
        }
        
        int middle = (start + end) / 2;
        if (target == nums[middle]) {
            return middle;
        } else if (target < nums[middle]) {
            return helper(nums, target, start, middle - 1);
        } else {
            return helper(nums, target, middle + 1, end);
        }
    }
};