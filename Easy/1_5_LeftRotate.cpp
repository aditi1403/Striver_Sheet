#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
int rotate(vector<int>& nums, int k) {
        //APPROACH 1
        int n = nums.size();
        k = k % n; // Ensure k is within the range [0, n)

        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the rest of the elements after k
        reverse(nums.begin() + k, nums.end());

        //APPROACH 2
        // int temp;
        // int n = nums.size();

        // for(int i = 1; i <= k; i++){
        //     temp = nums[n-1];
        //     for(int j = n - 1; j > 0; j--){
        //         nums[j] = nums[j - 1];
        //     }
        //     nums[0] = temp;
        // }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {0,1,2,3,4,5,6,7};
    int k = 3;

    solution.rotate(nums, k);

    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

