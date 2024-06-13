#include<iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        int i = 0, j = 0; 
        vector<int> ans;
        while (i < n && j < m) 
        {
            while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
                i++;
            while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
                j++;
            if (arr1[i] < arr2[j]) 
                ans.push_back(arr1[i++]);
          
            else if (arr2[j] < arr1[i]) 
                ans.push_back(arr2[j++]);
                
            else
            {
                ans.push_back(arr2[j++]);
                i++;
            }
        } 
        while(i < n)
        {
            while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
                i++;
            ans.push_back(arr1[i++]);
        }
        while(j < m)
        {
            while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
                j++;
            ans.push_back(arr2[j++]);
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 6, 7};
    int m = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> result = solution.findUnion(arr1, arr2, n, m);

    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}