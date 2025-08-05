#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=5;
    int long sum=0;
    int inputarr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&inputarr[i]);
         sum+=inputarr[i];
    }
    long int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=sum-inputarr[i];
    } 
    long int max=arr[0];
    long int min=arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){min=arr[i];}
    }
    printf("%ld %ld",min,max);
    return 0;
}