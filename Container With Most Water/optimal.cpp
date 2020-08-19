class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int max = 0;
        while (start < end) {
            int smaller = (height[start] < height[end]) ? height[start] : height[end];
            int area = smaller * (end - start);
            if (area > max) {
                max = area;
            }
            
            if (height[start] > height[end]) {
                end--;
            } else {
                start++;
            }
        }
        return max;
    }
};