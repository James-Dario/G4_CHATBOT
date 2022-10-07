#include <string.h>
const char * askname(char * name);
const char * question(char * inputuser);

int currentstage = 0;
//gcc -c -Wall -Werror -fpic main.c
//gcc -shared -o ./dll/main.dll main.o

const char * mainfunc(char * inputuser, int stage){

    if(stage == 1){
        return askname(inputuser); 
    }
    else if (stage == 2){
        return question(inputuser);
    }
    
    return "Hello";
}




const char * askname(char * name){

    char * output= ". In which group do you belong? <i>Please enter the number besides your answer.</i> <br>1. I'm a <b>STUDENT</b>📚 <br> 2. I'm a <b>FARMER👩‍🌾👨‍🌾</b><br>3. I'm a <b>RETIREE👩‍🦳👨‍🦳</b><br>4. I'm a <b>WORKING INDIVIDUAL👜</b><br>5. <b>Others</b><br>";
    return output;
}

const char * question(char * inputuser){
    char * output = "What do you want to know? <i>Please enter the number besides your answer.</i> <br>1. LOANS 💸</br> <br>2. CARDS💳</br> <br>3. SAVINGS ACCOUNT🏧</br> <br>4. INVESTMENTS💰</br> <br>5. INSURANCES📃</br> <br>6. RETIREMENT PLANS👴👵</br> <br>7. REMITTANCES📨</br>";
    return output;
}


const char * loans(char * str1, int stage){

    

    return "loans";
}

const char * cards(char * str1){

    return "card";
}
