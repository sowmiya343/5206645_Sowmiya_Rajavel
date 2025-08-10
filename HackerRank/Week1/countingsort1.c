#include <stdio.h>

int main() {
    int value;
    int freq[100] = {0};

    while (scanf("%d", &value) == 1) { 
        if (value >= 0 && value < 100) {
            freq[value]++;
        }
    }

    for (int i = 0; i < 100; i++) {
        printf("%d ", freq[i]);
    }
    return 0;
}
