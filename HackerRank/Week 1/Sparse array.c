#include<stdio.h>
#include<string.h>
int main(){
    int n,q;
    scanf("%d",&n);
    char strings[n][101];
    for(int i=0;i<n;i++){
        scanf("%s",strings[i]);
    }
    scanf("%d",&q);
    char queries[101];
    for(int j=0;j<q;j++){
        scanf("%s",queries);
        int count=0;
        for(int k=0;k<n;k++){
            if(strcmp(strings[k],queries)==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}