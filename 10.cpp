#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int count=0;
            int maxi=0;
            for(auto x:nums)
            {
                if(x==1){
                    count++;
                    maxi=max(count,maxi);
                }
                else{
                    count=0;
                }
            }
            return maxi;
        }
    };