#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sortedNums[10005] = {0};
        int ans;
        for (int i = 0; i < nums.size(); ++i) {
            sortedNums[nums.at(i)] = 1;
        }
        for (int i = 0; i <= nums.size(); ++i) {
            if (!sortedNums[i]) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};