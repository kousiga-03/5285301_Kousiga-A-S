#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int mindiff=1000000000;
    for(int i=0;i<=n-k;i++){
        int diff=arr[i+k-1]-arr[i];
        if(diff<mindiff){
            mindiff=diff;
        }
    }
    printf("%d\n",mindiff);
    return 0;
}
