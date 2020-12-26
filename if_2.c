#include <stdio.h>

int main() {
    int h;
    int m;
    scanf("%d %d",&h,&m);
    if((23>=h && h>=0)&&(59>=m && m>=0)){
        if(m>=45){
            printf("%d %d",h,m-45);
        }
        else{
            if(h!=0){
                printf("%d %d",h-1,m+60-45);
                }   
            else{
                printf("%d %d",h+23,m+60-45);
                }
            }
    }
    
    return 0;
 } 
  