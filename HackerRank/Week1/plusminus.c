#include <stdio.h>
#include <stdlib.h>
 int main(){
    int n;
    float p=0.0,nn=0.0,z=0.0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p+=1;
        } else if (arr[i]<0){
            nn+=1;
        }
        else 
        z+=1;
    }
    printf("%f\n%f\n%f",p/n,nn/n,z/n);
    return 0;
 }
