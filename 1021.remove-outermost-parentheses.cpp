/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        int input_length = s.length();
        vector<char>v;
        v.reserve(input_length);
        int left_count = 0;

        for(int i=0; i < input_length; i++)
        {
            if (s[i] == '(')
            {
                if (left_count != 0)
                {
                    v.push_back(s[i]);
                }
                left_count++;
            }
            else
            {
                left_count--;

                if(left_count != 0)
                {
                    v.push_back(s[i]);
                }
            }
        }

        string ans(v.begin(), v.end());
        return ans;
    }
};
// @lc code=end

