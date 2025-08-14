#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int letters[26]={0};
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            char lower=tolower(str[i]);
            letters[lower-'a']=1;
        }
    }
    int ispangram=1;
    for(int i=0;i<26;i++){
        if(letters[i]==0){
            ispangram=0;
            break;
        }
    }
    if(ispangram){
        printf("pangram\n");
    }
    else{
        printf("not pangram");
    }
    return 0;
}