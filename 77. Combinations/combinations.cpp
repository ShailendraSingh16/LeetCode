class Solution {
private:
void solve(int n, int k, int start, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int i = start; i <= n; ++i) {
            current.push_back(i);
            solve(n, k, i + 1, current, result);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> result;

        vector<int> current;
        solve(n, k, 1, current, result);

        return result;
    }
};
