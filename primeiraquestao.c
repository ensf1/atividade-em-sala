#include <stdio.h>
#include <string.h>

int verifica_inicio_ou_fim_da_substring(int num,int tamanho,char nome_da_posicao[7]){
    printf("Informe um numero que representara o caracter %s da substring",nome_da_posicao);
    scanf("%d",&num);
    if (num>0 && num<tamanho){
        return num;
    }
    verifica_inicio_ou_fim_da_substring(num,tamanho,nome_da_posicao);
}

int main() {
    char string[20],new_string[20];
    int i, j, tamanho_da_string,x,y=0;
    printf("Informe uma string:");
    gets(string);
    tamanho_da_string = strlen(string);
    i  = verifica_inicio_ou_fim_da_substring(-1,tamanho_da_string,"INICIO");
    j  = verifica_inicio_ou_fim_da_substring(-1,tamanho_da_string,"FIM");
    printf("%d %d",i,j);
    for(x=i;x<=j;x++){
        new_string[y] = string[x];
        y++;
    }
    printf("%s", new_string);

}
