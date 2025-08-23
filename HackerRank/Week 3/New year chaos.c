#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int q[n];
        for(int i=0;i<n;i++){
            scanf("%d",&q[i]);
        }
        int bribes=0;
        int chaotic=0;
        for(int i=0;i<n;i++){
            if(q[i]-(i+1)>2){
                chaotic=1;
                break;
            }
            for(int j=(q[i]-2>0?q[i]-2:0);j<i;j++){
                if(q[j]>q[i]){
                    bribes++;
                }
            }
        }
        if(chaotic){
            printf("Too chaotic\n");
        }
        else{
            printf("%d\n", bribes);
        }
    }
    return 0;
}
