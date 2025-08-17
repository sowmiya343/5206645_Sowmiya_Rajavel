#include <stdio.h>

int main() {
    int l;
    scanf("%d", &l);
    char strr[l + 1];
    scanf("%s",strr);
    int n;
    scanf("%d", &n);
    n = n % 26;

    for (int i = 0; i < l; i++) {
        if (strr[i] >= 'a' && strr[i] <= 'z') {
            strr[i] = ((strr[i] - 'a' + n) % 26) + 'a';
        } 
        else if (strr[i] >= 'A' && strr[i] <= 'Z') {
            strr[i] = ((strr[i] - 'A' + n) % 26) + 'A';
        }
    }

    printf("%s", strr);
    return 0;
}
