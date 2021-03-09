#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int checkTable[10005] = {0};
        for (int i = 0; i < nums.size(); ++i) {
            if (checkTable[nums.at(i)] == 0) {
                checkTable[nums.at(i)] = 1;
            } else {
                ans.push_back(nums.at(i));
            }
        }
        for (int i = 2; i <= nums.size(); ++i) {
            if (checkTable[i] == 0) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};