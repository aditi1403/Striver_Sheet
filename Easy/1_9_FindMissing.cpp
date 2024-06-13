#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int cur_sum = 0, req_sum, ans;
        req_sum = (n*(n+1)/2);

        for(int i = 0; i < n; i++){
            cur_sum += nums[i];
        }
        ans = req_sum - cur_sum;

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {3,0,1};
    int missingNum = solution.missingNumber(nums);
    cout << missingNum << endl;

    return 0;
}