#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n,q;
    scanf("%d",&n);
    char str[n][100];
    for (int i=0;i<n;i++){
    scanf("%s",str[i]);}
    
    scanf("%d",&q);
    char que[q][100];
    for (int i=0;i<q;i++){
    scanf("%s",que[i]);}
     
     int num[q];
     for(int i=0;i<q;i++){
        num[i]=0;
        for(int j=0;j<n;j++){
        if(strcmp(que[i],str[j])==0){
            num[i]+=1;
        }
     }
     }
     for(int i=0;i<q;i++){
     printf("%d\n",num[i]);}
     return 0;
}
