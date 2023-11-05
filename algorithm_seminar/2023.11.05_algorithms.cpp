// Dynamic Programming

//Problem 1 - My Solution
/*
#include <iostream>
int countWays(int n){
    if (n<=0) return 0;
    if (n==1) return 1;

    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for (int i=3;i<=n;++i){
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    return dp[n];
}

int main(){
    int n;
    std::cin >> n;
    int val1=countWays(n)%10007;
    std::cout << val1 << std::endl;
    return 0;
}
*/

// Good Solution


// Problem 2 - My Solution
/*
#include <iostream>
#include <vector>

int findLongest(const std::vector<int>& A) {
    int n = A.size();
    if (n == 0) return 0;

    std::vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > maxLength) {
            maxLength = dp[i];
        }
    }

    return maxLength;
}

int main() {
    std::vector<int> A;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        A.push_back(val);
    }
    int longest = findLongest(A);
    std::cout << longest << std::endl;
    return 0;
}
*/


// Problem 3 - My Solution (WRONG)
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ElectricLine {
    int start, end;
};

bool compareLines(const ElectricLine& a, const ElectricLine& b) {
    return a.end < b.end;
}

int findMinCuts(vector<ElectricLine>& lines) {
    sort(lines.begin(), lines.end(), compareLines);

    int n = lines.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (lines[i].start > lines[j].end) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main() {
    int n;
    cin >> n;

    vector<ElectricLine> lines(n);
    for (int i = 0; i < n; i++) {
        cin >> lines[i].start >> lines[i].end;
    }

    int minCuts = findMinCuts(lines);
    cout << n - minCuts << endl;
    return 0;
}
*/

// Good Solution
#include <iostream>
#include <bits/stdc++.h>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<std::pair<int,int>> A(N);
    for (int i=0;i<N;++i){
        std::cin >> A[i].first >> A[i].second;
    }
    std::sort(A.begin(),A.end());
    std::vector<int> dp(N,0);
    int mx=0;
    for (int k=0;k<N;++k){
        dp[k]=1;
        for (int i=0;i<N;++i){
            if (A[i].second<A[k].second){
                dp[k]=std::max(dp[k],dp[i]+1);
            }
        }
        mx=std::max(mx,dp[k]);
    }
    std::cout << N-mx << std::endl;
    return 0;
}