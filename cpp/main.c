#include <string.h>

//gcc -c -Wall -Werror -fpic main.c
//gcc -shared -o ./dll/main.dll main.o

const char * loans(char * str1, int stage){

    if(stage ==1){
        return "I'm Piso, your Digital Banking Assistant. </br> I can help you apply for a Bank Account, Credit Card or Loans and much more.  Let's get started!  ";
    }
    return "wrong";
}
