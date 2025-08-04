#include <stdio.h>
int main(){
    long arr[5],sum=0,min,max;
    long minsum,maxsum;
    for(int i=0;i<5;i++){
        scanf("%ld ",&arr[i]);
        sum+=arr[i];
    }
    min=max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    minsum=sum-max;
    maxsum=sum-min;
    printf("%ld %ld",minsum,maxsum);
    return 0;
}