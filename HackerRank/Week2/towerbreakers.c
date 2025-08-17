#include <stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d",&n,&m);
        if(m==1||n%2==0) printf("2\n");
        else printf("1\n");
        t--;
    }
}