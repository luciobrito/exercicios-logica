//Função para retornar a mediana de uma array ordenada em C

#include <stdio.h>
#include <math.h>

int main(){
    int valores[] = {1,2,3,4,5,6};
    double tamanho = sizeof(valores)/4;
    double valorCentral = (tamanho - 1)/2;
    int indice[2];
    float mediana;
    if(fmod(valorCentral,1) == 0){
        indice[0] = valorCentral;
        mediana = valores[indice[0]];
    }
    else{
        indice[0] = valorCentral + 0.5;
        indice[1] = valorCentral - 0.5;
        mediana = (valores[indice[0]] + valores[indice[1]]) / (double) 2;
    }
    printf("%.1f\n", mediana);
    return 0;
}
