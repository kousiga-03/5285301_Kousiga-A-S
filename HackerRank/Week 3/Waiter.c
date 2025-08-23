#include <stdio.h>
#include <math.h>
#define MAX 100005
int isPrime(int n){
    if(n < 2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void generatePrimes(int primes[],int q){
    int count=0,num=2;
    while(count<q){
        if(isPrime(num)){
            primes[count++]=num;
        }
        num++;
    }
}
int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int plates[MAX];
    for(int i=0;i<n;i++){
        scanf("%d",&plates[i]);
    }
    int primes[q];
    generatePrimes(primes,q);
    int topA=n-1;
    for(int i=0;i<q;i++){
        int topNextA=-1,topB=-1;
        int nextA[MAX],B[MAX];
        while(topA>=0){
            int plate=plates[topA--];
            if(plate%primes[i]==0){
                B[++topB]=plate;
            }
            else{
                nextA[++topNextA]=plate;
            }
        }
        while(topB>=0){
            printf("%d\n",B[topB--]);
        }
        for(int j=0;j<=topNextA;j++){
            plates[j]=nextA[j];
        }
        topA=topNextA;
    }
    while(topA>=0){
        printf("%d\n",plates[topA--]);
    }
    return 0;
}
