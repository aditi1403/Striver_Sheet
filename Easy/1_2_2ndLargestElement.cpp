#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int print2largest(int arr[], int n) {
        int i, first, second;
        if (n < 2) {
	        return -1;
	    }

	    first = second = INT_MIN;
	    for (i = 0; i < n; i++) {
            if (arr[i] > first) {
	            second = first;
	            first = arr[i];
	        }
            else if (arr[i] > second && arr[i] != first) {
	            second = arr[i];
	        }
        }
	    if (second == INT_MIN)
	        return -1;
	    else
	        return second;
    }
};

int main()
{
    Solution solution;
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< solution.print2largest(arr, n)<<endl;
    return 0;
}