#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    long long dp[31][2]; // [розряд][стан]
    dp[1][0] = 2; // '5', '9'
    dp[1][1] = 0;

    for (int i = 2; i <= p; ++i) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1]; // змінюємо цифру
        dp[i][1] = dp[i - 1][0]; // залишаємо ту ж, двічі
    }

    printf("%lld\n", dp[p][0] + dp[p][1]);
    return 0;
}
