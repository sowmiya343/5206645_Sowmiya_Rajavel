#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; i++) {
        int kk = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > kk) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = kk;
    }
    int min_diff = arr[k-1] - arr[0];
    for(int i = 1; i <= n-k; i++) {
        int diff = arr[i+k-1] - arr[i];
        if(diff < min_diff)
            min_diff = diff;
    }
    printf("%d",min_diff);
    return 0;
}