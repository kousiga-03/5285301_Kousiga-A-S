#include <stdio.h>
int main(){
    char time[11];
    scanf("%s",&time);
    int hour;
    sscanf(time,"%2d",&hour);
    if(time[8]=='A'){
        if(hour==12){
            hour=0;
        }
    }
    else{
        if(hour!=12){
            hour+=12;
        }
    }
    printf("%02d%c%c%c%c%c%c",hour,time[2],time[3],time[4],time[5],time[6],time[7]);
    return 0;
}
