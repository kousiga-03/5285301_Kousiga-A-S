#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);  
    while(t--){
        int m,n;
        scanf("%d %d",&m,&n); 
        int cost[n];
        for(int i=0;i<n;i++){
            scanf("%d",&cost[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(cost[i]+cost[j]==m){
                    printf("%d %d\n",i+1,j+1);
                    goto done; 
                }
            }
        }
        done:;
    }
    return 0;
}
