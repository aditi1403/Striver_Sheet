#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i + 1]){
                count++;
            }
        }

        if(nums[n-1] > nums[0]){
            count++;
        }

        return count <= 1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {3, 4, 5, 1, 2};
    cout<< (solution.check(nums) ? "TRUE" : "FALSE")<< endl;

    return 0;
}