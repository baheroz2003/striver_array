#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            int K=k%n;
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+K);
            reverse(nums.begin()+K,nums.end());    
        }
    };