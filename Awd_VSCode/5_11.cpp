#include <iostream>
#include <string>
using namespace std;
int n;
string s;
int main()
{
    cin >> n >> s;
    int sum[2] = {0};
    for (auto ch : s)
    {
        sum[ch - '0']++;
    }
    int left = 0, right = 0, ret = 0, half = n / 2;
    int count[2] = {0};
    while (right < n - 1)
    {
        count[s[left++] - '0']--;

        if (right - left + 1 == half)
        {
            if (count[0] * 2 == sum[0] && count[1] * 2 == sum[1])
            {
                ret += 2;
            }
        }
        right++;
    }
    cout << ret << endl;
    return 0;
}