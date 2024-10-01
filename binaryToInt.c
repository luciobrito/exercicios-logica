#include <stdio.h>
#include <string.h>
#include <math.h>
int binaryToInt(char* string){
    int valor = 0;
    for(int i = strlen(string), j = 0; i >= 0; i--, j++){
        //Se valor na posição for igual a 1, então somar com 2^posição
        if(string[j] == '1') valor += pow(2,i - 1);
    }
    return valor;
}

int main(){
    printf("%d", binaryToInt("111"));
    return 0;
}