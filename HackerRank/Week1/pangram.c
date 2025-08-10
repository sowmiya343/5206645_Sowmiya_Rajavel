#include <stdio.h>
#include <stdlib.h>
int main(){
    char line[1000];
    scanf("%[^\n]",line);
    int freq[26]={0};
    int i=0;
    while(line[i]!='\0'){
        if(line[i]>='a' && line[i]<='z'){
            freq[line[i]-'a']++;
        }
        else if(line[i]>='A' && line[i]<='Z'){
            freq[line[i]-'A']++;
        }
        i++;
    }
    for(int j=0;j<26;j++){
        if(freq[j]==0){
            printf("not pangram");
            return 0;
        }
    }
    printf("pangram");
    return 0;
    
}
