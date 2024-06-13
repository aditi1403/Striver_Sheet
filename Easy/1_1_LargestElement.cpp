#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largest(vector<int> &arr, int n) {
        int max_pt=arr[0];
        for(int i=0;i<n;i++){
            max_pt=max(max_pt, arr[i]);
        }
        return max_pt;
    }
};

int main()
{
    Solution solution;
    vector<int> arr = {1, 8, 7, 56, 90};
    int n = arr.size();
    cout<< solution.largest(arr, n) << endl;

    return 0;
}