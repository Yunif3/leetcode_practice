class Solution {
public:
    bool less_comp (pair<int,int>& a, pair<int,int>& b) {
        return a.first < b.first;
    }
    
    int maxArea(vector<int>& height) {
        vector<pair<int,int>> vec;
        priority_queue<int, vector<int>, less<int>> max_pq;
        priority_queue<int, vector<int>, greater<int>> min_pq;
        for (int i = 0; i < height.size(); ++i) {
            pair<int, int> p = {height[i], i};
            vec.push_back(p);
            max_pq.push(i);
            min_pq.push(i);
        }
        
        sort(vec.begin(), vec.end());
        int max = 0;
        unordered_set<int> used;
        for (int i = 0; i < height.size() - 1; ++i) {
            int h = vec[i].first;
            int index = vec[i].second;
            used.insert(index);
            while (used.count(max_pq.top())) { max_pq.pop(); }
            while (used.count(min_pq.top())) { min_pq.pop(); }
            int dist1 = abs(max_pq.top() - index);
            int dist2 = abs(min_pq.top() - index);
            int local_max = dist1 > dist2 ? dist1 * h : dist2 * h;
            if (local_max > max) {
                max = local_max;
            }
        }
        return max;
    }
};