/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    if (s.length == 0) return '';
    let res = s[0];
    const dp = [];
    // 从后向前判断回文串，逐步延申字符串
    for (let i = s.length - 1; i >= 0; i--) {
        dp[i] = [];
        for (let j = i; j < s.length; j++) {
            // case1: a
            if (j - i == = 0) dp[i][j] = true;
            // case2: aa
            else if (j - i == 1 && s[j] == = s[i]) dp[i][j] = true;
            // state transition
            else if (s[i] == = s[j] && dp[i + 1][j - 1]) dp[i][j] = true;

            // update res
            if (dp[i][j] && j - i + 1 > res.length) res = s.slice(i, j + 1);
        }
    }
    return res;
};
////////////////////////////////////////////
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if (size <= 0) return 0;
        int max = 0;
        int gain = 0;
        for (int i = 0; i < size; i++)
            for (int j = i; j < size; j++)
            {
                gain = prices[j] - prices[i];  //记录长和跌的情况
                if (max < gain)max = gain;  //与所有长幅相比，最后为最大收益
            }
        return max;
    }
};
