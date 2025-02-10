#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            map<int,int>mpp;
            for(int i=0;i<nums.size();i++)
            {
                int x=target-nums[i];
                if(mpp.find(x)!=mpp.end()){
                    return {mpp[x],i};
                }
                mpp[nums[i]]=i;
            }
            return {-1,-1};   
        }
    };