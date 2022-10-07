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

const char * getquestion(char * inputuser);

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
        return getquestion(inputuser);
    }
    else if(stage == 5){
        return askchoice(inputuser);
    }
    
    return "Hello";
}




const char * askname(char * inputname){
    username = inputname;
    char * output= ". \"In which group do you belong? <i>Please enter the number besides your answer.</i> <br>1. I'm a <b>STUDENT</b>📚 <br> 2. I'm a <b>FARMER👩‍🌾👨‍🌾</b><br>3. I'm a <b>RETIREE👩‍🦳👨‍🦳</b><br>4. I'm a <b>WORKING INDIVIDUAL👜</b>";
    return output;
}

const char * question(char * inputuser){
    char * output = "What do you want to know? <i>Please enter the number besides your answer.</i> <br>1. LOANS 💸</br> <br>2. CARDS💳</br> <br>3. SAVINGS ACCOUNT🏧</br> <br>4. INVESTMENTS💰</br> <br>5. INSURANCES📃</br> <br>6. RETIREMENT PLANS👴👵</br> <br>7. REMITTANCES📨</br>";
    askbackground(inputuser);
    return output;
}


const char * getquestion(char * inputuser){

    if(strcmp(mainChoi,"loans")==0){
        return loanAns(inputuser);
    }else if (strcmp(mainChoi,"cards")==0){
        return cardsAns(inputuser);
    }else if (strcmp(mainChoi,"savings")==0){
        return saviAns(inputuser);
    }else if (strcmp(mainChoi,"investments")==0){
        return investAns(inputuser);
    }else if (strcmp(mainChoi,"insurance")==0){
        return insureAns(inputuser);
    }else if (strcmp(mainChoi,"retirement")==0){
        return retireAns(inputuser);
    }else if (strcmp(mainChoi,"remittances")==0){
        return remitAns(inputuser);
    }

    return "test";
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
    char * output = "I'm happy to help, what about <b>SAVINGS ACCOUNTS</b> that you want to learn more about?🏧<br><br> <i>Please explain:</i><br> 1. What are Savings Accounts?<br> 2. How do I set up a Savings Account?<br> 3. Requirements<br><br> <i>OTHERS:</i><br> 4. What would you recommend for me?<br>";
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
        output = "A personal loan is a sum of money that can be borrowed for different purposes. For instance, you can use personal <br>loans to pay the following expenses:<br><br><ul><li>Moving expenses</li><li>Debt consolidation</li><li>Medical bills</li><li>Wedding expenses</li><li>Home improvements or repairs</li><li>Funeral costs</li><li>Vacation expenses</li><li>Other expenses</li></ul>Personal loans are available from banks, credit unions, and online lenders. The borrowed funds must typically be <br>repaid over time with interest. Personal loans may incur fees from certain lenders.<br><br><br><b>Planning to get your personal loans? PISO has some tips for you: </b></br>Your current bank or credit union may be your first stop for personal loans. Your personal banker<br> can advise you on the personal loan choices for which you are most likely to qualify.<br><br>Pay attention to the specifics while comparing personal loans online or any bank offers. <br>Consider in particular the following:<br><br><ul><li>Interest Rates</li><li>Fees</li><li>Payment Terms and Conditions </li><li>Minimum and Maximum Borrowing Limits</li><li>Collateral requirements</li></ul>";
    }else if(strcmp(inputuser, "2")==0){
        output = "A housing loan or mortgage loan is a form of finance that provides the following:<ul><li>Acquisition of a fully developed lot</li><li>Purchase of a residential house and lot, townhouse, or condominium unit</li><li>Construction or completion of a residential unit on a lot you already own</li><li>Home improvement or renovation of existing residential property</li><li>Refinancing of an existing housing loan</li></ul><b>Planning on getting a home loan to start your dream house for yourself or for your <br>family? PISO has some tips for you: </b><br><br>Before applying for a housing loan, it is essential to understand its components. These are the four most <br>important factors to consider when deciding to get one. <br> <br><ul><li><b>Monthly payment.</b>Depending on the amount of the loan the bank will accept, your <br>monthly payment should be affordable. To accomplish this, you must have a monthly income that <br>is at least three times your mortgage payment.</li><li><b>Down payment.</b>This is the initial payment made when acquiring a home. Your down <br>payment determines how much house you can afford.</li><li><b>Loan tenure.</b>Total interest paid is proportionate to the duration of the loan. The greater <br>the duration, the greater the total amount of interest paid, and vice versa.</li><li><b>Interest Rate.</b>You can pick between terms with a fixed or variable interest rate. For individuals <br> who want regular monthly payments, the first choice is preferable. The latter features variable interest <br>rates that fluctuate with market interest rates.</li></ul>";
    }else if(strcmp(inputuser, "3")==0){
        output = "An SME loan, a type of business loan, is intended for those who intend to launch a business that will <br> have a positive influence on the industry, society and the country's overall economic growth.<br><br>The loan amount must be repaid at a fixed interest rate by the borrowers. <b>Small- and medium-sized <br> enterprise (SME) loans </b> are the greatest alternative for raising capital for anyone seeking to launch a <br>business and for medium-sized businesses seeking to expand. There are numerous lenders on the market,<br>each with multiple appealing offers. A well-designed business plan is typically sufficient to obtain a loan.<br><br><b> Ready to start to expand your business through loans? PISO has some tips for you </b><br><br>Before diving into the details of the available kind of loans and the loan that makes the most sense <br>for your business, examine your current needs. Ask yourself the following and research so you can <br>establish clear objectives for filing a loan for your business.<br><ul><li>How much cash do you need?</li><li>Why do you need the funds?</li><li>How long will it take you to pay it back?</li><li>How many years have you been in the business?</li><li>What is the present financial condition of your company?</li><li>How much, if any, collateral must you provide for the loan?</li><li>How is your credit rating?</li><li>Do you have outstanding loans?</li><li>Are you interested in a short-term or long-term loan?</li></ul>";
    }else if(strcmp(inputuser, "4")==0){
        output = "A <b>loan</b> is a form of credit in which a party receives a sum of money in exchange for future repayment <br>of the value or principal amount. In many instances, the lender adds interest or finance charges to the <br>principal debt, which the borrower must also pay. <br><br>To qualify for a loan, potential borrowers must demonstrate that they have the means and responsibility <br>in handling their finances to repay the lender. In order to maximize your chances of being approved for a loan, <br>you must demonstrate that you can responsibly manage debt. Repay your loans and credit cards in a timely <br>manner and avoid incurring additional debt. This will also make you eligible for reduced interest rates. <br><br><b>PISO reminds you that financial freedom comes when you handle your finances responsibly! </b>";
    }else if(strcmp(inputuser, "5")==0){
        output = "<b>Tired of doing the math in handling your loans or don’t know how to compute your fees? <br>PISO is here to help you. </b><br><br>Did you know that there are numerous loan calculators out there that can help you with your loan decision? <br>Loan calculators can assist you in calculating the monthly payments for various kinds of loans like mortgages, <br>car loans, personal loans, etc. Additionally, they can assist you determine how much you can borrow based on <br>your income and other variables.<br>Land Bank Users can use the link below for their housing loan calculator: <br><br><a href = \"https://www.landbank.com/housing-loan-calculator\">Land Bank of the Philippines Housing Loan Calculator</a><br><br>For BDO Customers click the link below to access their online loan calculator:<br><br><a href = \"https://www.bdo.com.ph/personal/loans/online-calculator\">BDO Loan Calculator </a><br><br>Metrobank also has an online calculator for home, car, and personal loan:<br><br><a href = \"https://mcola.metrobank.com.ph/car-loan/loan-calculator\">Metrobank Car Loan Calculator</a><br><a href = \"https://www.metrobank.com.ph/upgrade/personal-loan\">Metrobank Personal Loan Calculator</a><br><a href = \"https://www.metrobank.com.ph/upgrade/home-loan\">Metrobank Housing Loan Calculator </a><br>";
    }else if(strcmp(inputuser, "6")==0){
        return recomloans(inputuser);
    }
    return output;
}

const char * cardsAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "A <b>credit card</b> is a thin, rectangular piece of plastic or metal provided by a bank or financial services business <br>that enables cardholders to borrow money to pay for products and services at retailers that accept credit cards. <br>Credit cards require cardholders to repay the borrowed funds, plus any applicable interest, as well as any other <br>agreed-upon fees, either in full by the due date or over time.";
    }else if(strcmp(inputuser, "2")==0){
        output = "A <b>debit card</b> is a type of payment card that, when used, deducts funds straight from a consumer's checking <br> account. They can be used to purchase products or services, or to withdraw cash from an automated teller <br>machine or a merchant who allows you to add extra funds to an existing purchase. Debit cards replace cash <br>and cheques for transactions and ATM withdrawals. Debit cards have daily purchase limits, so large purchases <br>may not be allowed.";
    }else if(strcmp(inputuser, "3")==0){
        output = "A <b>cash card</b> is an electronic prepaid debit card that can be reloaded with funds. Withdraw cash and make <br>purchases at any ATM without opening a deposit account.";
    }else if(strcmp(inputuser, "4")==0){
        output = "A <b>bank card</b> is any card issued against a depository account, such as a debit card or an ATM card. Sometimes, the <br>term is also used to refer to <b>Visa</b> and <b>MasterCard credit cards</b>, which are likewise issued by banks but are not directly <br>tied to a depository account. Frequently, bank cards are linked to checking accounts so that funds issued to pay <br>purchases will be deducted from these accounts. When used at an ATM, bank cards could also provide access to <br>other sorts of accounts, such as a savings account. This could be done for purposes such as checking account balances<br>, making deposits, or transferring funds across accounts.";
    }else if(strcmp(inputuser, "5")==0){
        return recomcards(inputuser);
    }
    return output;
}

const char * saviAns(char * inputuser){
    char * output = "";
    if(strcmp(inputuser, "1")==0){
        output = "A <b>savings account deposit account</b> that earns interest. Even though these accounts normally yield a <b>low rate of interest</b>, <br>their safety and dependability make them an excellent alternative for storing cash for short-term requirements. There <br>are restrictions on how frequently you can withdraw funds from a savings account, but savings accounts generally offer <br>exceptional flexibility, making them ideal for building an emergency fund, saving for a short-term goal like buying a car <br>or going on vacation, or simply sweeping excess cash you don't need into your checking account so it can earn more interest. <br><br><b> Just a friendly reminder from PISO, having a savings account will definitely provide a big relief especially in cases <br>where you need money during emergencies or you just want to treat yourself with the best things in life. </b>";
    }else if(strcmp(inputuser, "2")==0){
        output = "A savings account is a secure location to save your emergency reserve or funds for short-term financial goals. The process<br> of opening a savings account can include searching for the lowest costs and highest interest rates, acquiring the <br>necessary documents, and setting up online banking. Here are some steps on opening a savings account. <br><br><b>1. SELECT THE RIGHT BANK FOR YOU.</b><br>Ensure that you have selected the appropriate bank for your needs prior to opening an account. If you currently have <br>a checking account, it is typically straightforward to open a savings account at the same bank. To ensure that your bank <br>offers the savings account characteristics that are important to you, such as competitive rates, it is worthwhile to compare <br>other possibilities.<br><br><b>2. OBTAIN REQUIRED DOCUMENTS.</b><br>When opening a bank account, you will be required to give personal information and supporting documentation.<br><br><b>3. SELECT A JOINT/SEPARATE ACCOUNT.</b><br>Open a personal account if you desire a separate savings account for yourself. You should open a joint account if you <br>are opening the account with another individual, such as your husband or your child.<br><br><b>4. FUND.</b><br>There may be an initial deposit requirement when opening a savings account. In addition to an initial deposit, some <br>savings accounts include a monthly maintenance cost that can deplete your assets. Some banks require a minimum <br>account balance of several hundred dollars in order to avoid this cost. Ensure that you satisfy the minimum beginning <br>deposit and maintain an adequate amount to avoid incurring maintenance costs when creating an account. <br><br><b>5. SUBMIT YOUR APPLICATION.</b><br>Submit a complete application and wait for the bank to activate your account. Typically, this occurs fast, and you can <br>begin making more deposits and withdrawals within a couple of days. <br><br><b>6. START AND USE ONLINE BANKING.</b><br>Almost every bank and credit union offer online banking, making it simple to check your balance, transfer funds, <br> and manage your account. Register for online banking and download the bank's mobile app and access your <br>account conveniently. ";
    }else if(strcmp(inputuser, "3")==0){
        output = "You must visit the bank in person to open an account. The requirements may differ by bank; therefore, it is advisable <br>to consult or visit the bank's website beforehand. However, most banks require the following:<br><ul><li>A <b>valid ID</b> with your photo and clearly displayed information. The identification document could be a passport, <br>driver's license, major credit card, or any other legally issued ID. Despite the fact that the central bank has decreased <br>the number of required IDs from two to one, many banks continue to request two forms of identification.</li><li>Two identification photos (often 1x1 or passport size).</li><li>Proof of address</li><li>A bank-specific minimum starting deposit </li></ul>For more information about some bank-specific requirements and guidelines for opening a saving account, <br>please refer to the provided links below: <br><br><a href = \"https://www.landbank.com/cards/atm-savings-account\">Land Bank of the Philippines Savings Account</a><a href = \"https://www.bdo.com.ph/personal/accounts/peso-savings-account\">BDO Savings Account Requirements</a><a href = \"https://www.metrobank.com.ph/save/savings\">Metrobank Open a Savings Account Requirements</a><b> PISO is here for you while you’re saving to secure your future! </b>";
    }else if(strcmp(inputuser, "4")==0){
        return recomsavings(inputuser);
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
        return recominvest(inputuser);
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
        return recominsure(inputuser);
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
        return recomretire(inputuser);
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
        return recomremit(inputuser);
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
        output = "For students, as per the guidelines, individuals who are below 18  <br>without parental consent and without any sourceof income <br>cannot apply for a student loan. However, if above 18 and <br>qualified, you can click one of the links to proceed. (INSERT LINK)";   
    }
    else if(strcmp(background, "farmer")==0){
        output = "For our hard working farmers, we have the best fit loan just for you. We have <br>loan plans such as <b>Sulong Saka<b> that provides credit assistance to farmers. We <br>also have the <b>Agricultural and Fishers Financing Program<b> which helps farmers <br>and fishers finance their economic expenses. For more info and the different <br>loan plans for farmers, just click this <a href = \"https://www.landbank.com/loans/loans-to-farmers-fishers/for-farmers\">link</a>.";    
    }
    else if(strcmp(background, "working")==0){
        output = "For working individuals, <b>personal loan</b> is advised. <b>Minimum of 1 year of regular <br> status for the current employer</b>, for employed individuals and <b>at least 2 years <b><br> in the current business for self-employed individuals. For more information <br> and application. Please click any of the links below for your desired bank partner. ";
    }
    else if(strcmp(background, "retiree")==0){
        output = "For retired individuals, <b>PISO</b> recommends you to apply for a <b>personal loan</b>. As <br>long as all requirements are met, you’re good to go! To file for an application, <br>click one of the links for your preferred bank partner.";
    }

    return output;
}

const char * recomcards(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "For students, <b>PISO</b> recommends the use of <b>cash cards</b>. Reload, withdraw and <br>deposit cash anytime and any place with an ATM without having a deposit account. <br>To apply for a cash card, click one of the links below for your desired bank account. ";
    }
    else if(strcmp(background, "farmer")==0){
        output = "For farmers, PISO recommends the use of <b>bank cards</b>. It can help you to monitor <br>and check your account’s balance as well as provide access to other sorts of bank <br>accounts. To apply for a bank card, click one of the links below for your <br>desired bank partner. " ;      
    }
    else if(strcmp(background, "working")==0){
        output = "For working individuals, PISO recommends the use of <b>bank cards</b>. It can help you <br>to monitor and check your account’s balance. To apply for a bank card, click one of <br>the links below for your desired bank partner. ";
    }
    else if(strcmp(background, "retiree")==0){
        output = "To help access your savings fund, PISO recommends the use of <b>bank cards</b>. In this <br>way, it will be convenient to withdraw, deposit and check other related accounts <br>with the use of one card. To apply for a bank card, click one of the links below <br>for your desired bank partner. ";
    }

    return output;
}

const char * recomsavings(char * inputuser){
    char * output = "";
    
    if(strcmp(background, "student")==0){
        output = "For students, PISO recommends <b>opening an online savings account</b> that offers a <br>low-maintaining balance or with little-to-no fee. Also that way, you know you can <br>access your money from anywhere. We maintain an updated list of the best online <br>savings accounts for students here. Check it out here:Insert direct links of student savings account openings in Landbank, BDO, Metrobank.";
    }
    else if(strcmp(background, "farmer")==0 || strcmp(background, "working")==0){
        output = "For working individuals, savings accounts offer you a place to put your money <br>that is separate from your everyday banking needs. It is wise to hold a savings <br>account at the same institution as your primary checking account as this can <br>offer several convenience and efficiency benefits.";    
    }
    else if(strcmp(background, "retiree")==0){
        output = "<b>Saving for retirement does not require a one-size-fits-all approach</b>. Because every <br> circumstance is different, it's critical to find the retirement account that best <br>fits your current job position and future aspirations. To know what to look for in <br>a retirement savings account, you might want to check out this <a href=\"https://www.finder.com.au/retirement-savings-account\">link</a>.";
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
