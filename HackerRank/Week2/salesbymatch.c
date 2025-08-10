#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) 
    {
    scanf("%d",&arr[i]);
    }
    int freq[200]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int pair=0;
    for(int i=0;i<200;i++){
        pair+=freq[i]/2;
    }
    printf("%d",pair);
    return 0;
}