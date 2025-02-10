#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int xo=0;
            for(auto x:nums)
            {
                xo^=x;
            }
            return xo;
        }
    };