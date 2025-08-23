#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int **seq=(int **)malloc(n*sizeof(int *));
    int *size=(int *)calloc(n,sizeof(int));    
    int *capacity=(int *)malloc(n*sizeof(int)); 
    for (int i=0;i<n;i++){
        seq[i]=NULL;
        capacity[i]=0;
    }
    int last=0;
    for (int i=0;i<q;i++){
        int type,x,y;
        scanf("%d %d %d",&type,&x,&y);
        int idx=(x^last)%n;
        if(type==1){
            if(size[idx]==capacity[idx]){
                capacity[idx]=(capacity[idx]==0)?2:capacity[idx]*2;
                seq[idx]=(int *)realloc(seq[idx],capacity[idx]*sizeof(int));
            }
            seq[idx][size[idx]++]=y; 
        } 
        else if(type==2){
            int pos=y%size[idx];
            last=seq[idx][pos];
            printf("%d\n",last);
        }
    }
    for(int i=0;i<n;i++){
        free(seq[i]);
    }
    free(seq);
    free(size);
    free(capacity);
    return 0;
}
