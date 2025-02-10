#include <bits/stdc++.h>
using namespace std;
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int>temp;
        int n=arr.size();
        temp.push_back(arr.back());
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=temp.back())
            {
                temp.push_back(arr[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};