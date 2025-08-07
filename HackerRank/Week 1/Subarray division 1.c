#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int d,m;
    scanf("%d %d",&d,&m);
    int count=0;
    for(int j=0;j<=n-m;j++){
        int sum=0;
        for(int k=0;k<m;k++){
            sum+=s[j+k];
        }
        if(sum==d){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}