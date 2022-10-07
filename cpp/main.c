#include <string.h>

//gcc -c -Wall -Werror -fpic main.c
//gcc -shared -o ./dll/main.dll main.o

const char * loans(char * str1, int stage){

    if(stage ==1){
        return str1;
    }
    return "wrong";
}