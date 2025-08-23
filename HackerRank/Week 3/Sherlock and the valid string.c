#include<stdio.h>
#define MAX 26
int main(){
    char s[100005];
    scanf("%s",s);
    int freq[MAX]={0};
    for (int i=0;s[i];i++){
        freq[s[i]-'a']++;
    }
    int counts[100005],csize=0;
    for(int i=0;i<MAX;i++){
        if(freq[i]>0){
            counts[csize++]=freq[i];
        }
    }
    int min=counts[0],max=counts[0];
    for(int i=1;i<csize;i++){
        if(counts[i]<min){
            min = counts[i];
        }
        if(counts[i]>max){
            max = counts[i];
        }
    }
    int minCount=0,maxCount=0;
    for(int i=0;i<csize;i++){
        if(counts[i]==min){
            minCount++;
        }
        if(counts[i]==max){
            maxCount++;
        }
    }
    if(min==max){
        printf("YES\n");
    }
    else if(min==1 && minCount==1 && (maxCount+minCount==csize)){
        printf("YES\n");
    }
    else if(max==min+1 && maxCount==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
