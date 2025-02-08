// User function template for C++
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      // Function returns the second
      // largest elements
      int print2largest(vector<int> &arr) {
          int slargest=INT_MIN;
          int largest=*max_element(arr.begin(),arr.end());
          int n=arr.size();
          for(int i=0;i<n;i++)
          {
              if(slargest<arr[i] && arr[i]!=largest)
                  slargest=arr[i];
          }
          
          return slargest;
      }
  };