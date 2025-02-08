#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //we can take extra space as set and vectors
        set<int>s1;
        for(int i=0;i<n;i++)
        {
            s1.insert(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            s1.insert(arr2[i]);
        }
        vector<int>vec(s1.begin(),s1.end());
        return vec;
    }
};