#include <string.h>
const char * askname(char * name);
const char * question(char * inputuser);
void askbackground(char * inputuser);
const char * askchoice(char * inputuser);

const char * loanChoi(char * inputuser);
const char * cardChoi(char * inputuser);
const char * saviChoi(char * inputuser);
const char * investChoi(char * inputuser);
const char * insureChoi(char * inputuser);
const char * retireChoi(char * inputuser);
const char * remitChoi(char * inputuser);

const char * loanAns(char * inputuser);
const char * cardsAns(char * inputuser);
const char * saviAns(char * inputuser);
const char * investAns(char * inputuser);
const char * insureAns(char * inputuser);
const char * retireAns(char * inputuser);
const char * remitAns(char * inputuser);

const char * recomloans(char * inputuser);
const char * recomcards(char * inputuser);
const char * recomsavings(char * inputuser);
const char * recominvest(char * inputuser);
const char * recominsure(char * inputuser);
const char * recomretire(char * inputuser);
const char * recomremit(char * inputuser);

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
    char * output = "I'm happy to help, what about <b>LOANS</b> that you want to learn more about?💸<br><br> <i>Please explain:</i><br> 1. Personal Loans<br> 2. Home Loans<br> 3. SME Loans<br><br> <i>OTHERS:</i><br> 4. What are LOANS? How do they work?<br> 5. Loan Calculator<br> 6. What would you recommend for me?<br>";
    return output;
}

const char * cardChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>CARDS</b> that you want to learn more about?💳<br><br> <i>Please explain:</i><br> 1. Credit Cards<br> 2. Debit Cards<br> 3. Cash Cards<br><br> <i>OTHERS:</i><br> 4. What are BANK CARDS? How do they work?<br> 5. What would you recommend for me?<br>";
    return output;
}

const char * saviChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>SAVINGS ACCOUNTS</b> that you want to learn more about?🏧<br><br> <i>Please explain:</i><br> 1. What are Savings Accounts?<br> 2. How do I set up a Savings Account?<br> 3. Requirements<br><br> <i>OTHERS:</i><br> <b>4. What would you recommend for me?<br>";
    return output;
}

const char * investChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>INVESTMENTS</b> that you want to learn more about?💰<br><br> <i>Please explain:</i><br> 1. What are Investing?<br> 2. How do I start?<br><br> <i>OTHERS:</i><br> 3. What would you recommend for me?<br>";
    return output;
}

const char * insureChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>INSURANCES</b> that you want to learn more about?📃<br><br> <i>Please explain:</i><br> 1. What is Insurance?<br> 2. Do I need it?<br> <i>OTHERS:</i><br><br> 3. What would you recommend for me?<br>";
    return output;
}

const char * retireChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>RETIREMENT PLANS</b> that you want to learn more about?👴👵<br><br> <i>Please explain:</i><br> 1. What is a Retirement Plan?<br><br> <i>OTHERS:</i><br> 2. The <b>PISO Guide</b> on Planning Your Retirement<br> 3. What would you recommend for me?<br>";
    return output;
}

const char * remitChoi(char * inputuser){
    char * output = "I'm happy to help, what about <b>REMITTANCES</b> that you want to learn more about?📨<br><br> <i>Please explain:</i><br> 1. What is a Remittance?<br> 2. How can I make a remittance?<br> 3. Requirements<br><br> <i>OTHERS:</i><br> 4. What would you recommend for me?<br>";
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
        output = "<b>Insurance is a financial safety net that helps you and your family recover <br>from a misfortune</b>, such as a fire, theft, lawsuit, or even automobile accident. <br>When you acquire insurance, you will receive a policy, which is a legally <br>binding agreement between you and your insurance provider. <br>When you incur a covered loss and make a claim, the insurance company <br>pays you or a chosen recipient, known as a beneficiary, according to the terms of your policy.<br><br><b><i>PISO knows that you don’t want any unfortunate circumstances <br> to happen to you or your loved ones and even your properties. <br> However, having insurance will be beneficial because suffering without <br>getting insured will definitely put you in the most difficult financial situation. </i></b>";
    }else if(strcmp(inputuser, "2")==0){
        output = "<b><i>As your friend in finance, PISO highly recommends that you get yourself an insurance. </i></b>There is no doubt that you will have a <b>greater sense of security</b> <br>if you and your loved ones are financially secured against any kind <br>of unforeseen circumstances. Uncertainties in life, such as an untimely <br>death or a medical emergency, could occur at any time. <br>These events also involve automobile accidents and property damage. <br>Experiencing the financial repercussions of these circumstances <br>might burn a hole in your wallet. You may be required to use <br>your savings or your family's hard-earned money. Therefore, you <br>and your family have an urgent need for insurance to provide <b>adequate<br>protection and financial support</b> against any risks associated <br>with your life, health, and property.";
    }else if(strcmp(inputuser, "3")==0){
        //output = "";
    }
    return output;
}

const char * retireAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "A retirement plan is intended to provide for your post-retirement needs<br> and facilitate a <b>stress-free lifestyle.</b> One of these is a <b>retirement savings plan,</b><br>which helps your money grow and provides a lifetime income. <br>These plans allow you to save money for retirement while you are still employed. <br>The other option is a <b>retirement annuity plan</b> in which you make <br>a one-time investment and receive a guaranteed regular income<br>either immediately or at a later date from your purchase. <br><br>As inflation rises, the price of all goods and services increases, <br>you can <b>safeguard</b> your retirement assets against inflation if you <br>have a good retirement plan. It can also help you prepare for any financial <br> difficulties that may arise in the future. <br><br><b><i>PISO knows that you don't want to spend the rest of your life working from 9 to 5.<br> I’m sure you have multiple aspirations for your life after retirement. <br>With the help of a retirement plan, you can fulfill your goals and live your life to the fullest!</i></b>";
    }else if(strcmp(inputuser, "2")==0){
        output = "Setting financial milestones is important. Your goals will help you <br>make the right decisions and achieve financial security. You're probably <br>saving for a house, a car, and your child's education as a young professional.  <br><b><i>PISO also wants to remind you that you too should save up for your retirement.</i></b><br><br>Small investments today will give higher returns than massive investments<br>in the future. Early preparedness will provide you more flexibility in a medical <br>emergency or a crisis like COVID-19. <br><br><b>How can you develop a retirement fund? <br>PISO is here to guide you and let you know of the following: </b><br><br><b>1. SET RETIREMENT GOALS.</b><br>What's your retirement age? What properties do you want to have? <br>These questions help you set retirement goals. Knowing your goals at a <br>specific age will guide your professional and financial decisions.<br><br><b>2. KNOW WHAT KIND OF LIFESTYLE YOU WANT.</b><br>Lifestyle choices impact future expenditure demands.<br>If you want to travel and mark off bucket list items later in life, you must earn more or save earlier. <br><br><b>3. INSURANCE PROTECTS INCOME.</b><br>A safety net can help ensure a happy and comfortable future. <br>Some insurance policies offer premium coverage and investment earnings.<br>Consider insuring your other assets outside yourself and your family. <br>Having your home or car insured helps limit losses in an emergency or breakdown.<br><br><b>4. CONSIDER MEDICAL COSTS.</b><br>Age causes health problems. If you have medical conditions, consider potential <br>expenses that you might need in the future. Eating healthy and exercising <br> will help you avoid expensive hospital bills, but health insurance is also beneficial. <br><br><b>5. DIVERSIFY YOUR INVESTMENTS.</b><br>Even if a stock seems attractive, don't put all your money in it <br>in case it goes bad. Diversify your investments to combat this. Having high, <br>medium, and low-risk assets will maintain your financial stability even if one fails. <br><br><b>6. ADAPT YOUR STRATEGY TO YOUR TIME HORIZON.</b><br>Current and ideal retirement ages will guide your plan. <br>Younger professionals have time to recuperate from a disastrous investment, <br>so they're more risk tolerant. Professionals who start retirement planning after <br>40 must invest safely. Your time horizon will assist you choose the best strategies. <br><br>";
    }else if(strcmp(inputuser, "3")==0){
        //output = "";
    }
    return output;
}

const char * remitAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "A remittance is the <b>transfer of funds between two parties.</b> <br>In general, any payment of an invoice or bill can be referred to as a remittance. <b>However, the term is most commonly used today to describe money sent home<b>by a worker who works <b>overseas</b> to his or her family.";
    }else if(strcmp(inputuser, "2")==0){
        output = "Typically, remittances are transmitted using an electronic payment system or service.<br><br><ul><li>Individuals can initiate a wire transfer at a bank, credit union, or online. <br>If necessary, large sums of money can be transferred and made available<br>the following day, though this may take longer. Since wire transfers <br> cannot be reversed, it is essential to send money to the intended recipient. </li><li>Be prepared to provide the recipient's bank name, bank account number,<br> and routing number when wire transferring money. </li><li>Individuals can also use apps like PayPal and WorldRemit to send money abroad.</li><li>Money transfer services can also assist with international money transfers. <br>This can typically be done in person or online. Some providers of these<br>services are Western Union, Wise and Xe. </li></ul><br><b><i>Just a friendly reminder from PISO, be wary of sending your remittances and make sure<br>to choose the right money remittance centers in sending your hard-earned money <br>to your loved ones. Express your love and support through money remittance!</i></b>";
    }else if(strcmp(inputuser, "3")==0){
        output = "Generally, remittances can be done by visiting the nearest money remittance center<br>and also can be done online through mobile application. <br><br><b>In sending or receiving remittances, make sure to provide the following: </b><br><b>OVER THE COUNTER:</b><br><ul><li>Moving expenses</li><li>Filled-out money send or receiving form</li><li>Valid ID</li><li>Cash (for sender)</li></ul><b>ONLINE</b><br><ul><li>Bank account, credit card or debit card</li><li>Email</li><li>Valid ID</li><li>Personal account provided by the money remittance service provider</li></ul><br>Requirements may vary depending on the service provider. Banks are now elevating their services<br>by providing remittance services that will be valuable to their customers. <br><b>Provided on the links below are some services offered by banks here in the Philippines:</b><br><ul><li><b><a href = \"https://www.landbank.com/remittance\">Landbank of the Philippines</a></b></li><li><b><a href = \"https://www.bdo.com.ph/personal/remittance-services\">BDO</a></b></li><li><b><a href = \"https://www.metrobank.com.ph/manage/remittance-services\">Metrobank</a></b></li></ul><br><b><i>PISO wants to assist you in managing your finances so that your hard-earned money is not wasted. Send and receive money transfers responsibly!</i></b>";
    }else if(strcmp(inputuser, "4")==0){
        //output = "";
    }
    return output;
}


const char * recomm(char * inputuser){

    char * output = "";
    if(strcmp(mainChoi, "loans")==0){
        return recomloans(inputuser);
    }
    else if(strcmp(mainChoi, "cards")==0){
        return recomcards(inputuser);
    }
    else if(strcmp(mainChoi, "savings")==0){
        return recomsavings(inputuser);
    }
    else if(strcmp(mainChoi, "investments")==0){
        return recominvest(inputuser);
    }
    else if(strcmp(mainChoi, "insurance")==0){
        return recominsure(inputuser);
    }
    else if(strcmp(mainChoi, "retirement")==0){
        return recomretire(inputuser);
    }
    else if(strcmp(mainChoi, "remittances")==0){
        return recomremit(inputuser);
    }
    return output;
}



const char * recomloans(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "";
    }
    else if(strcmp(background, "farmer")==0){
        output = "";    
    }
    else if(strcmp(background, "working")==0){
        output = "";
    }
    else if(strcmp(background, "retiree")==0){
        output = "";
    }

    return output;
}

const char * recomcards(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "";
    }
    else if(strcmp(background, "farmer")==0){
        output = "" ;      
    }
    else if(strcmp(background, "working")==0){
        output = "";
    }
    else if(strcmp(background, "retiree")==0){
        output = "";
    }

    return output;
}

const char * recomsavings(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "";
    }
    else if(strcmp(background, "farmer")==0 || strcmp(background, "working")==0){
        output = "";    
    }
    else if(strcmp(background, "retiree")==0){
        output = "";
    }

    return output;
}


const char * recominvest(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "";
    }
    else if(strcmp(background, "farmer")==0 || strcmp(background, "working")==0){
        output = "";    
    }
    else if(strcmp(background, "retiree")==0){
        output = "";
    }

    return output;
}


const char * recominsure(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "For students, health insurances such as <b>Emergency Medical Assistance</b><br>as well as Hospitalization Cash Assistance is much recommended. <br>Especially when face-to-face classes resume again, a good health <br> insurance is the best option. To get your insurance, <b><a href = \"\">click here.</a></b>";
    }
    else if(strcmp(background, "farmer")==0){
        output = "Planting all day and maintaining the plants is quite crucial. <br>PISO recommends having <b>Business Insurance</b>, to have <br>that protection in case anything unfortunate happens. <br>This can help farmers to have that back-up plan in case natural calamities or disasters happen. <br>To start planning your Business Insurance, <b><a href = \"\">click here.</a></b>" ;      
    }
    else if(strcmp(background, "working")==0){
        output = "Working hard for our family is the main goal for us working individuals. <br>To ensure a secure future for your family, PISO recommends having <br><b>Protection Insurance</b>, for any what ifs that may happen to life, <br>and <b>Estate Planning</b>, to leave your loved ones a secure home. <br>To start getting this insurance, <b><a href = \"\">click here.</a></b>";
    }
    else if(strcmp(background, "retiree")==0){
        output = "For retired individuals, planning ahead of time would be essential. <br>With that PISO recommends <b>starting early and get retirement insurance</b> <br>to have that well deserved life after years of hard work for you and your family. <br>To plan for the best of your future, <b><a href = \"\">click here.</a></b>";
    }

    return output;
}

const char * recomretire(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0 || strcmp(background, "farmer")==0 || strcmp(background, "working")==0){
        output = "<b>It is never too early to plan for things that will help you in the future. </b><br>We recommend for you to know as early as now about the things that can <br>possibly help your future. To know more/apply about <b>Retirement Plans</b>, <b><a href = \"\">click here.</a></b>";
    }
    else if(strcmp(background, "retiree")==0){
        output = "We thank you for your service and as a part of that, we recommend <br>that you take the Retirement Plan. It will not only cover your post-retirement<br>needs but also can help provide you the lifestyle you deserve. <br>To apply for the Retirement Plan, <b><a href = \"\">click here.</a></b>";
    }

    return output;
}


const char * recomremit(char * inputuser){
    char * output = "To have the best experience, PISO recommends going to the nearest remittance branch<br>located in your area. To see the available branches, click one of the links for your desired bank partner.";
    return output;
}
