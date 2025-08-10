#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        count=0;
        for (int j=0;j<n;j++){
            if(a[i]==a[j]){
                count=count+1;
            }
        }
        if(count==1){
            printf("%d",a[i]);
        }
    }
    return 0;
}
