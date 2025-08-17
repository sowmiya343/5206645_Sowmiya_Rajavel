
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char n[1000005];
    long long k,sum=0;
    scanf("%s",n);
    int l=strlen(n);
    scanf("%lld",&k);
    for (int i=0;i<l;i++){
        sum+=n[i]-'0';
    }
    sum=sum*k;
    long long superdigit=0;
    while(sum>=10){
        superdigit=0;
        while(sum>0){
            superdigit+=sum%10;
            sum/=10;
        }
        sum=superdigit;
    }
    printf("%lld",sum);
    return 0;
   
}