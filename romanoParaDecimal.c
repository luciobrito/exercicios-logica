#include <stdio.h>
#include <string.h>

int romanChar(char s){
    switch(s){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        
    }
}
int romanToInt(char* s){
    int value = 0;
    for(int i = 0; i < strlen(s); i++){
        if(romanChar(s[i]) >= romanChar(s[i+1])) value += romanChar(s[i]);
        if (romanChar(s[i]) < romanChar(s[i+1])) value -= romanChar(s[i]);

        
    }
    return value; 
}

int main(){
    char abc[] = "MMXXIV";
    int a = romanToInt(abc);
    printf("%d",a);
    return 0;
}