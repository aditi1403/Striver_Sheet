#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // APPROACH 1
        // int n = nums.size();
        // int count = 0, ans;
        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         if(nums[i] != nums[j]){
        //             j++;
        //         }
        //         else{
        //             count++;
        //         }
        //     }
        //     if(count == 1){
        //         ans = nums[i];
        //     }
        // }
        // return ans;

        // APPROACH 2
        int ans=0;
	    for(auto x:nums){
	       ans^=x;
           cout << ans << endl;
        }
	    return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {4,1,2,1,2};
    int result = solution.singleNumber(nums);

    cout << result << endl;

    return 0;
}