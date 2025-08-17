#include <stdio.h>
#include <stdlib.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int z=0;
    long long temp=n;
    while(temp>0){
        if((temp&1)==0) z++;
        temp>>=1;
    }
    long long ans= 1LL << z;
    printf("%lld\n",ans);
    return 0;
}
