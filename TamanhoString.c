#include <stdio.h>
#include <string.h>

int conta_str(char x[]){
    int i=0;
    while (x[i] != '\0')
        i++;
        return i;
}

int main(){
    char str[40];
    int tamanho;
    gets(str);
    tamanho = conta_str(str);
    printf("Tamanho de %s: %d\n", str, tamanho);
    return 0;
}