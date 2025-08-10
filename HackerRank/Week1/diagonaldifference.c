#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int lr=0,rl=0;
    for(int i=0;i<n;i++){
        lr+=arr[i][i];//left to right
        rl+=arr[i][n-i-1];//right to left
    }
    int diff=0;
    diff=lr-rl;
    printf("%d",abs(diff));
}