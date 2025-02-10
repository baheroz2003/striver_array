#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //method 1-brute force
    //method 2-sliding window
    //method 3-prefix sum map
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int,int>mpp;
        int sum=0,maxi=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K)
            {
                maxi=i+1;//i will be treated at frequency
            }
            int rem=sum-K;
            if(mpp.find(rem)!=mpp.end()) //already in map
            {
                maxi=max(maxi,i-mpp[rem]);
            }
             if(mpp.find(sum)==mpp.end()) //not in map
            {
                mpp[sum]=i;  
        }
        }
        return maxi;
    } 

};

