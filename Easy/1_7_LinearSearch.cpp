#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int searchInSorted(int arr[], int N, int K) {
        // // APPROACH 1
        // for(int i = 0; i < N; i++){
        //     if(arr[i] == K){
        //         return 1;
        //     }
        // }
        // return -1;
       // Your code here
       
        // // APPROACH 2
        int l = 0, r = N-1;
        int m = l + (r-l) / 2;
    	while (l <= r) { 
    		m = l + (r - l) / 2; 
    		if (arr[m] == K) {
    			return 1; 
            }
    		if (arr[m] < K) { 
    			l = m + 1; 
            }
    		else {
    			r = m - 1;
            } 
    	} 
    	return -1;
    }
};

int main()
{
    Solution solution;
    int arr[] = {1, 2, 3, 4, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 6;
    int result = solution.searchInSorted(arr, N, K);

    
    cout << result << endl;

    return 0;
}