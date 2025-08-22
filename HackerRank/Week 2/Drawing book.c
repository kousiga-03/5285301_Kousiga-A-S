#include<stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int front=p/2;
    int back=n/2-p/2;
    int result;
    if(front<back){
        result=front;
    }
    else{
        result=back;
    }
    printf("%d\n",result);
    return 0;
}