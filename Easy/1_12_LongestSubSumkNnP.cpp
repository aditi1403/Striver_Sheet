#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lenOfLongSubarr(int A[],  int N, int K) {
        unordered_map<int, int> um; 
        int sum = 0, maxLen = 0; 
        for (int i = 0; i < N; i++) { 
            sum += A[i]; 
            if (sum == K) 
                maxLen = i + 1; 
            if (um.find(sum) == um.end()) 
                um[sum] = i; 
            if (um.find(sum - K) != um.end()) { 
                if (maxLen < (i - um[sum - K])) 
                    maxLen = i - um[sum - K]; 
            } 
        }
        return maxLen;
    }
};

int main()
{
    Solution solution;
    int A[] = {10, 5, 2, 7, 1, 9};
    int N = sizeof(A)/sizeof(A[0]);
    int K = 15;
    int result = solution.lenOfLongSubarr(A, N, K);

    if(result == 0){
        cout << "NA" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}