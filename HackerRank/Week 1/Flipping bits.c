#include<stdio.h>
int main(){
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        unsigned int n;
        scanf("%u",&n);
        unsigned int res=~n;
        printf("%u\n",res);
    }
    return 0;
}