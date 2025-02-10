#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int>temp(nums.size(),-1);
            int pos=0;
            int neg=1;
            for(auto x:nums)
            {
                if(x>0)
                {
                    temp[pos]=x;
                    pos++;
                    pos++;
                }
                else
                {
                    temp[neg]=x;
                    neg++;
                    neg++;
                }
            }
            return temp;
        }
    };