#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 2, 3, 3, 3, 4, 5, 5};
    int k = solution.removeDuplicates(nums);
    cout<< k <<endl;
    for(int i = 0; i < k; i++){
        cout<< nums[i] << " ";
    }
    cout<<endl;

    return 0;
}