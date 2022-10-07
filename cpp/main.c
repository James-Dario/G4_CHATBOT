#include <string.h>
const char * askname(char * name);
const char * question(char * inputuser);
void askbackground(char * inputuser);
void askchoice(char * inputuser);

int currentstage = 0;
char * background = "";
char * username = "";
char * maincchcoice = "";
//gcc -c -Wall -Werror -fpic main.c
//gcc -shared -o ./dll/main.dll main.o

const char * mainfunc(char * inputuser, int stage){

    if(stage == 1){
        return askname(inputuser); 
    }
    else if (stage == 2){
        return question(inputuser);
    }else if (stage == 3){
        askchoice(inputuser);
    }else if(stage == 4){

        return maincchcoice;
    }
    
    return "Hello";
}




const char * askname(char * inputname){
    username = inputname;
    char * output= ". In which group do you belong? <i>Please enter the number besides your answer.</i> <br>1. I'm a <b>STUDENT</b>📚 <br> 2. I'm a <b>FARMER👩‍🌾👨‍🌾</b><br>3. I'm a <b>RETIREE👩‍🦳👨‍🦳</b><br>4. I'm a <b>WORKING INDIVIDUAL👜</b><br>5. <b>Others</b><br>";
    return output;
}

const char * question(char * inputuser){
    char * output = "What do you want to know? <i>Please enter the number besides your answer.</i> <br>1. LOANS 💸</br> <br>2. CARDS💳</br> <br>3. SAVINGS ACCOUNT🏧</br> <br>4. INVESTMENTS💰</br> <br>5. INSURANCES📃</br> <br>6. RETIREMENT PLANS👴👵</br> <br>7. REMITTANCES📨</br>";
    askbackground(inputuser);
    return output;
}


void askbackground(char * inputuser){

    if(strcmp(inputuser,"1")==0 ){
        background="student";
    }else if (strcmp(inputuser,"2")==0){
        background="farmer";    
    }else if (strcmp(inputuser,"3")==0){
        background="retiree";    
    }else if (strcmp(inputuser,"4")==0){
        background="working";    
    }else if (strcmp(inputuser,"5")==0){
        background="others";    
    }

}

void askchoice(char * inputuser){

    if(strcmp(inputuser,"1")==0){
        maincchcoice="loans";
    }else if (strcmp(inputuser,"2")==0){
        maincchcoice="cards";    
    }else if (strcmp(inputuser,"3")==0){
        maincchcoice="savings";    
    }else if (strcmp(inputuser,"4")==0){
        maincchcoice="investments";    
    }else if (strcmp(inputuser,"5")==0){
        maincchcoice="insurance";    
    }else if (strcmp(inputuser,"6")==0){
        maincchcoice="retirement";    
    }else if (strcmp(inputuser,"7")==0){
        maincchcoice="remittances";    
    }
}
