#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            //my solution 
            int cnt=count(nums.begin(),nums.end(),0);
            nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
            for(int i=0;i<cnt;i++)
            {
                nums.push_back(0);
            }     
        }
        //   int left = 0;
    
        //     for (int right = 0; right < nums.size(); right++) {
        //         if (nums[right] != 0) {
        //             swap(nums[right], nums[left]);
        //             left++;
        //         }
        //     }        
        // }
    };