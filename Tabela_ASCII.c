#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

    int i;

    for(i=32;i<255;i++){
        if(i % 10 == 0){
        printf("\n");
        }
        printf("%d = %c \t", i, i);
        
    }
return 0;    
}