#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        printf("%d ",count[i]);
    }
    return 0;
}