#include <stdio.h>
#include <string.h>

int main() {
    int x;
    char string[20];
    printf("Informe uma string");
    gets(string);
    for(x=0;x< strlen(string);x++){
        if(string[x]>=97 && string[x]<=122){
            string[x]-=32;
        }
    }
    printf("%s",string);
}
