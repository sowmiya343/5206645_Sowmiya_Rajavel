#include <stdio.h>
#include <string.h>

void sort(char row[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (row[j] > row[j + 1]) {
                char temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char grid[n][n+1];
        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
            sort(grid[i], n); // sort each row alphabetically
        }
        
        int k = 1;
        for (int col = 0; col < n && k; col++) {
            for (int row = 0; row < n - 1; row++) {
                if (grid[row][col] > grid[row + 1][col]) {
                    k = 0;
                    break;
                }
            }
        }
        
        if (k)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
    
