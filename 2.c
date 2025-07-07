#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int p;
    scanf("%d", &p);

    int num, result;
    scanf("%d", &result); 

    for (int i = 1; i < p; i++) {
        scanf("%d", &num);
        result = lcm(result, num);
    }

    printf("%d\n", result);
    return 0;
}
