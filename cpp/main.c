#include <string.h>
const char * askname(char * name);
const char * question(char * inputuser);
void askbackground(char * inputuser);
const char * askchoice(char * inputuser);
const char * cardChoi(char * inputuser);
const char * saviChoi(char * inputuser);
const char * investChoi(char * inputuser);
const char * insureChoi(char * inputuser);
const char * retireChoi(char * inputuser);
const char * remitChoi(char * inputuser);


const char * loanChoi(char * inputuser);


int currentstage = 0;
char * background = "";
char * username = "";
char * mainChoi = "";
//gcc -c -Wall -Werror -fpic main.c
//gcc -shared -o ./dll/main.dll main.o

const char * mainfunc(char * inputuser, int stage){

    if(stage == 1){
        return askname(inputuser); 
    }
    else if (stage == 2){
        return question(inputuser);
    }
    else if (stage == 3){
        return askchoice(inputuser);
    }
    else if(stage == 4){
        return mainChoi;
    }
    
    return "Hello";
}




const char * askname(char * inputname){
    username = inputname;
    char * output= ". In which group do you belong? <i>Please enter the number besides your answer.</i> <br>1. I'm a <b>STUDENT</b>📚 <br> 2. I'm a <b>FARMER👩‍🌾👨‍🌾</b><br>3. I'm a <b>RETIREE👩‍🦳👨‍🦳</b><br>4. I'm a <b>WORKING INDIVIDUAL👜</b>";
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
    }
    else if (strcmp(inputuser,"2")==0){
        background="farmer";    
    }
    else if (strcmp(inputuser,"3")==0){
        background="retiree";    
    }
    else if (strcmp(inputuser,"4")==0){
        background="working";    
    }
}

const char * askchoice(char * inputuser){

    if(strcmp(inputuser,"1")==0){
        mainChoi="loans";
        return loanChoi(inputuser);
    }else if (strcmp(inputuser,"2")==0){
        mainChoi="cards";
        return cardChoi(inputuser);
    }else if (strcmp(inputuser,"3")==0){
        mainChoi="savings";    
        return saviChoi(inputuser);
    }else if (strcmp(inputuser,"4")==0){
        mainChoi="investments";   
        return investChoi(inputuser); 
    }else if (strcmp(inputuser,"5")==0){
        mainChoi="insurance";  
        return insureChoi(inputuser);  
    }else if (strcmp(inputuser,"6")==0){
        mainChoi="retirement";    
        return retireChoi(inputuser);
    }else if (strcmp(inputuser,"7")==0){
        mainChoi="remittances";    
        return remitChoi(inputuser);
    }

    return "test";
}

const char * loanChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>LOANS</b> that you want to learn more about?💸 <br><i>Please explain:</i></br> <br>1. Personal Loans</br> <br>2. Home Loans</br> <br>3. SME Loans</br> <br><br><i>OTHERS:</i></br></br> <br>4. What are LOANS? How do they work?</br> <br>5. Loan Calculator</br> <br><b>6. What would you recommend for me?</b></br>";
    return output;
}

const char * cardChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>CARDS</b> that you want to learn more about?💳 <br><i>Please explain:</i></br> <br>1. Credit Cards</br> <br>2. Debit Cards</br> <br>3. Cash Cards</br> <br><br><i>OTHERS:</i></br></br> <br>4. What are BANK CARDS? How do they work?</br> <br><b>5. What would you recommend for me?</b></br>";
    return output;
}

const char * saviChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>SAVINGS ACCOUNTS</b> that you want to learn more about?🏧 <br><i>Please explain:</i></br> <br>1. What are Savings Accounts?</br> <br>2. How do I set up a Savings Account?</br> <br>3. Requirements</br> <br><br><i>OTHERS:</i></br></br> <br><b>4. What would you recommend for me?</b></br>";
    return output;
}

const char * investChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>INVESTMENTS</b> that you want to learn more about?💰 <br><i>Please explain:</i></br> <br>1. What are Investing?</br> <br>2. How do I start?</br> <br><br><i>OTHERS:</i></br></br> <br><b>3. What would you recommend for me?</b></br>";
    return output;
}

const char * insureChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>INSURANCES</b> that you want to learn more about?📃 <br><i>Please explain:</i></br> <br>1. What is Insurance? </br> <br>2. Do I need it?</br> <br><br><i>OTHERS:</i></br></br> <br><b>3. What would you recommend for me?</b></br>";
    return output;
}

const char * retireChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>RETIREMENT PLANS</b> that you want to learn more about?👴👵 <br><i>Please explain:</i></br> <br>1. What is a Retirement Plan?</br> <br><br><i>OTHERS:</i></br></br> <br>2. The <b>PISO Guide</b> on Planning Your Retirement</br> <br><b>3. What would you recommend for me?</b></br>";
    return output;
}

const char * remitChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>REMITTANCES</b> that you want to learn more about?📨 <br><i>Please explain:</i></br> <br>1. What is a Remittance?</br> <br>2. How can I make a remittance?</br> <br>3. Requirements</br> <br><br><i>OTHERS:</i></br></br><br><b>4. What would you recommend for me?</b></br>";
    return output;
}

const char * loanAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        output = "";
    }else if(strcmp(inputuser, "4")==0){
        output = "";
    }else if(strcmp(inputuser, "5")==0){
        output = "";
    }else if(strcmp(inputuser, "6")==0){
        //output = "";
    }
    return output;
}

const char * cardsAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        output = "";
    }else if(strcmp(inputuser, "4")==0){
        output = "";
    }else if(strcmp(inputuser, "5")==0){
        //output = "";
    }
    return output;
}

const char * saviAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        output = "";
    }else if(strcmp(inputuser, "4")==0){
        //output = "";
    }
    return output;
}

const char * investAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        //output = "";
    }
    return output;
}

const char * insureAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        //output = "";
    }
    return output;
}

const char * retireAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        //output = "";
    }
    return output;
}

const char * remitAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "";
    }else if(strcmp(inputuser, "2")==0){
        output = "";
    }else if(strcmp(inputuser, "3")==0){
        output = "";
    }else if(strcmp(inputuser, "4")==0){
        //output = "";
    }
    return output;
}

const char * recomm(char * inputuser){
    char * output = "";
    if(strcmp(background, "student")==0){
        
    }
    else if(strcmp(background, "farmer")==0){

    }
    else if(strcmp(background, "working")==0){

    }
    else if(strcmp(background, "retiree")==0){

    }
    return output;
}

const char * recomStud(char * inputuser){
    char * output = "";
    if(strcmp(mainChoi, "loans")==0){
        output = "";
    }
    else if(strcmp(mainChoi, "cards")==0){
        output = "";
    }
    else if(strcmp(mainChoi, "investments")==0){
        output = "";
    }
    else if(strcmp(mainChoi, "insurance")==0){
        output = "";
    }
    else if(strcmp(mainChoi, "retirement")==0){
        output = "";
    }
    else if(strcmp(mainChoi, "remittances")==0){
        output = "";
    }
}