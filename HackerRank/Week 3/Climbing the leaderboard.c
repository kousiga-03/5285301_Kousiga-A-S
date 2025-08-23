#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int scores[n];
    for (int i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }
    scanf("%d",&m);
    int alice[m];
    for(int i=0;i<m;i++){
        scanf("%d",&alice[i]);
    }
    int unique[n],uSize=0;
    unique[uSize++]=scores[0];
    for(int i=1;i<n;i++){
        if(scores[i]!=scores[i-1]){
            unique[uSize++]=scores[i];
        }
    }
    int pos=uSize-1;
    for(int i=0;i<m;i++){
        while(pos>=0 && alice[i]>=unique[pos]){
            pos--;
        }
        printf("%d\n",pos+2);
    }
    return 0;
}
