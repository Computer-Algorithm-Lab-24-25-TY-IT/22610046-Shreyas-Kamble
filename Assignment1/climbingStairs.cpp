#include<bits/stdc++.h>

using namespace std;

int climbStairs(int n, vector<int>& memo) {
    if (n <= 2) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = climbStairs(n - 1, memo) + climbStairs(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 5;
    vector<int> memo(n + 1, -1);
    cout << climbStairs(n, memo) << endl; // Output: 8
    return 0;
}