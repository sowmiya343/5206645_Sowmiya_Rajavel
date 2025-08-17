

#include <stdio.h>

int main() {
    int n, p;
    scanf("%d %d", &n, &p);

    int front = p / 2;
    int back = (n / 2) - (p / 2);

    if (front < back)
        printf("%d", front);
    else
        printf("%d", back);

    return 0;
}
