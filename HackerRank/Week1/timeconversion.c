#include <stdio.h>
#include <stdlib.h>
int main(){
    char time[20];
    scanf("%s",&time);
    int h=0,m=0,s=0,i=0;
    h=(time[0]-'0')*10+(time[1]-'0');//hour
    m=(time[3]-'0')*10+(time[4]-'0');//minute
    s=(time[6]-'0')*10+(time[7]-'0');//seconds
    char noon[2];
    noon[0]=time[8];
    noon[1]=time[9];
    if(noon[0]=='A'&& h==12)h=0;
    else if(noon[0]=='P' && h!=12)h+=12;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
