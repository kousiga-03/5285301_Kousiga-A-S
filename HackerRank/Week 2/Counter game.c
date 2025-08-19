#include <stdio.h>
static int popcount_ull(unsigned long long x){
    int c=0;
    while(x){
        x&=(x-1); 
        c++;
    }
    return c;
}
int main(void){
    int t;
    if(scanf("%d",&t)!=1){
        return 0;
    }
    while(t--){
        unsigned long long n;
        scanf("%llu",&n);
        int moves=popcount_ull(n-1);
        if (moves % 2){
            puts("Louise");
        }
        else{
            puts("Richard");
        }
    }
    return 0;
}
