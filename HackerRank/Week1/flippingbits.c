#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    unsigned int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=~(arr[i]);
    }
    for (int i=0;i<n;i++){
    printf("%u\n",arr1[i]);}
}