#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t); 
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        long long Sum=0;
        for (int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            Sum+=arr[i]; 
        }
        long long left=0;
        int count=0;
        for (int i=0;i<n;i++){
            long long right=Sum-left-arr[i]; 
            if(left==right){
                count=1;
                break;
            }
            left+=arr[i];
        }
        if(count){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
