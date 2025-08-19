#include<stdio.h>
int main(){
    long n;
    scanf("%ld",&n);
    int zerobit=0;
    while(n>0){
        if((n&1)==0){
            zerobit++;
        }
        n>>=1;
    }
    long long result=1LL<<zerobit;
    printf("%lld\n",result);
    return 0;
}