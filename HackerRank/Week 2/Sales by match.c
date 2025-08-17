#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int socks[101]={0};
    int color;
    for(int i=0;i<n;i++){
        scanf("%d",&color);
        socks[color]++;
    }
    int pairs=0;
    for(int i=0;i<101;i++){
        pairs+=socks[i]/2;
    }
    printf("%d\n",pairs);
    return 0;
}
