#include <stdio.h>
#include <stdlib.h>
 int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[1000],b[1000];
        for (int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        for(int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (a[i]>a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (b[i]<b[j]){
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        int kk=1;
        for(int i=0;i<n;i++){
            if(a[i]+b[i]<k){
                kk=0;
                break;
            }
        }
        if (kk) printf("YES\n");
        else printf("NO\n");
            }
            return 0;
 }
