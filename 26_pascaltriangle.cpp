#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> ans; 
           long long calculate(long long n, long long r) {
            long long res = 1;
            for (long long i = 0; i < r; i++) {
                res = res * (n - i) / (i + 1);
            }
            return res;
        }
        //my logic first calculate fact
    //     long long fact(long long n) {
    //         long long res = 1;
    //         for (long long i = 1; i <= n; i++) {
    //             res *= i;
    //         }
    //         return res;
    //     }
    // //calculate each binomial coefficient
    //     long long calculate(long long n, long long r) {
    //         if (r == 0 || r == n) 
    //             return 1;
    //         return fact(n) / (fact(r) * fact(n - r));
    //     }
        vector<vector<int>> generate(int n) {
            for(int i = 0; i < n; i++) {
                vector<int> row; 
                for(int j = 0; j <= i; j++) {
                    row.push_back(calculate(i, j));
                }
                ans.push_back(row); 
            }
            return ans;
        }
    };
    