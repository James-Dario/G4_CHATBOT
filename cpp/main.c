#include <string.h>
const char * askname(char * name);
const char * askjob(char * input);


//gcc -c -Wall -Werror -fpic main.c
//gcc -shared -o ./dll/main.dll main.o

const char * mainfunc(char * inputuser, int stage){

    if(stage == 1){
        //char * output = askname(inputuser);
        return askname(inputuser); 
    }else if (stage == 2){
        return askjob(inputuser);
    }
    


    return "Hello";
}




const char * askname(char * name){

    char * output= "in which group do you belong? Please enter the number besides your answer. <br>1. I'm a STUDENT📚 <br> 2. I'm a FARMER👩‍🌾👨‍🌾<br>3. I'm a RETIREE👩‍🦳👨‍🦳<br>4. I'm a WORKING INDIVIDUAL👜<br>5. Other<br>";
    return output;
}

const char * askjob(char * input){

    return input;
}

const char * loans(char * str1, int stage){

    

    return "loans";
}

const char * cards(char * str1){

    return "card";
}
