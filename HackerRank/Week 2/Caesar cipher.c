#include<stdio.h>
#include<ctype.h>
int main(){
    int n,k;
    char s[1000];
    scanf("%d",&n);
    scanf("%s",s);
    scanf("%d",&k);
    k=k%26;
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            s[i]='A'+(s[i]-'A'+k)%26;
        }
        else if(islower(s[i])){
            s[i]='a'+(s[i]-'a'+k)%26;
        }
    }
    printf("%s\n",s);
    return 0;
}