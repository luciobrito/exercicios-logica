#include <stdio.h>
#include <conio.h>
#define LINHA 5
#define COLUNA 5
 char grade[COLUNA][LINHA];
int main(){
    for (int i = 0; i < COLUNA; i++)
    {
        for(int j = 0; j < LINHA; j++){
            grade[i][j] = '-';
        }
    }
    grade[0][0] = 'X';
    
    char val;
    int coord[2] = {0,0};
    while(val != 'f'){
        val = getch();
        //printf("Char: %d\n", val);
        if(val == 's') {
            grade[coord[0]][coord[1]] = '-';
            coord[0] += 1;
        };
        if(val == 'd'){
            grade[coord[0]][coord[1]] = '-';
            coord[1] +=1;
        }
        grade[coord[0]][coord[1]] = 'X';
        //grade[old_c][lin] = '-';
        system("cls");
        printf("Col: %d Lin: %d\n", coord[0], coord[1]);
        printf("Col: %d Lin: %d\n", coord[0], coord[1]);
        printColuna();
    }
    

    
    return 0;
}
void printColuna(){
    for(int i = 0; i < COLUNA;i++){
        for(int j = 0; j < LINHA; j++){
            printf("%c",grade[i][j]);
        }
        printf("\n");
    }

}