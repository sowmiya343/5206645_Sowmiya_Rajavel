#include <stdio.h>
#include <stdlib.h>
void balancedsum(int arr1[],int n){
    int total=0,ls=0;
     for(int i = 0; i < n; i++){
        total += arr1[i];
    }

    for(int i = 0; i < n; i++){
        total -= arr1[i]; 
        if(ls == total){
            printf("YES\n");
            return;
        }
        ls += arr1[i];
    }

    printf("NO\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        balancedsum(arr,n);
        t--;
    }
}