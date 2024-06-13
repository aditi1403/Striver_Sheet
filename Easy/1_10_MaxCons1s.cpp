#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //APPROACH 1
        int n = nums.size();
        int mx_count = INT_MIN, count = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                count = 0;
            }
            mx_count = max(mx_count, count);
        }
        return mx_count;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxCOnsecutiveOnes = solution.findMaxConsecutiveOnes(nums);

    cout<< maxCOnsecutiveOnes << endl;

    return 0;
}