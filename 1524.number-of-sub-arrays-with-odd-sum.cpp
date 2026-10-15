/*
 * @lc app=leetcode id=1524 lang=cpp
 *
 * [1524] Number of Sub-arrays With Odd Sum
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int size = arr.size();

        int total = 0;
        int odd = 0;
        int even = 1;
        long long count = 0; 

        for (int j = 0; j < size; j++) {
            total += arr[j];

            if (total % 2 == 1) {
                count += even;
                odd++;
            } else {
                count += odd;
                even++;
            }
        }

        return count % MOD;
    }
};
// @lc code=end

