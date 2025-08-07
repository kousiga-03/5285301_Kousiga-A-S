#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,diff;
    scanf("%d",&n);
    int m[n][n];
    int ltr=0,rtl=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&m[i][j]);
            if(i==j){
                ltr+=m[i][j];
            }
            if(i+j==n-1){
                rtl+=m[i][j];
            }
        }
    }
    diff=abs(ltr-rtl);
    printf("%d",diff);
    return 0;
}