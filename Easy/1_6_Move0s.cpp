#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int moveZeroes(vector<int>& nums) {
        // APPROACH 1
    //     int n = nums.size();
    //     int numZeroes = 0;
    //     for(int i = 0; i < n; i++){
    //         numZeroes += (nums[i] == 0);
    //     }
    //     vector<int> ans;
    //     for(int i = 0; i < n; i++){
    //         if(nums[i] != 0){
    //             ans.push_back(nums[i]);
    //         }
    //     }
    //     while(numZeroes--){
    //         ans.push_back(0);
    //     }
    //     for(int i = 0; i < n; i++){
    //         nums[i] = ans[i];
    //     }
    // }

    // APPROACH 2
        int n = nums.size();
        for(int last_non_zero = 0, cur = 0; cur < n; cur++){
            if(nums[cur] != 0){
                swap(nums[last_non_zero], nums[cur]);
                last_non_zero++;
            }
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);
    for(int num : nums){
        cout<< num <<" ";
    }
    cout << endl;

    return 0;
}