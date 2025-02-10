#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function to find pair with maximum sum
      int pairWithMaxSum(vector<int> &arr) {
      int maxi=INT_MIN;
      for(int i=1;i<arr.size();i++)
      {
              int sum=arr[i]+arr[i-1];
               maxi=max(maxi,sum);
          }
      
      return maxi;
      }
  };
  