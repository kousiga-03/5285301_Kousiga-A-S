#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        if(m==1 || n%2==0){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}