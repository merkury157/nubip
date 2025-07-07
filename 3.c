#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    long long dp[31][2]; 
    dp[1][0] = 2; 
    dp[1][1] = 0;

    for (int i = 2; i <= p; ++i) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1]; 
        dp[i][1] = dp[i - 1][0]; 
    }

    printf("%lld\n", dp[p][0] + dp[p][1]);
    return 0;
}
