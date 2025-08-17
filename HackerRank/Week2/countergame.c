#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);

        int turns = 0;  

        while (n > 1) {
            if ((n & (n - 1)) == 0) {
                n >>= 1;
            } else {
                unsigned long long p = 1ULL;
                while ((p << 1) <= n) {
                    p <<= 1;
                }
                n -= p;
            }
            turns++;
        }

        if (turns % 2 == 1) {
            printf("Louise\n");
        } else {
            printf("Richard\n");
        }
    }
    return 0;
}
