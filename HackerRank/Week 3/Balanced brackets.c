#include <stdio.h>
#define MAX 1000
char stack[MAX];
int top =-1;
void push(char c){
    stack[++top]=c;
}
char pop(){
    if(top==-1){
        return '\0';
    }
    return stack[top--];
}
int isBalanced(char *s){
    top=-1; 
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c=='(' || c=='{' || c=='['){
            push(c);
        }
        else{
            char popped=pop();
            if((c==')' && popped!='(') ||
                (c=='}' && popped!='{') ||
                (c==']' && popped!='[')){
                return 0;
            }
        }
    }
    return top==-1; 
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[MAX];
        scanf("%s",s);
        if(isBalanced(s)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
