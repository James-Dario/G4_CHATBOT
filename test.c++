#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool choicecheck(std::string & str1, std::string &str2)
{
    return ((str1.size() == str2.size()) && std::equal(str1.begin(), str1.end(), str2.begin(), [](char & c1, char & c2){
                            return (c1 == c2 || std::toupper(c1) == std::toupper(c2));
                                }));
}

//if loan
void loans(){

    cout<<"What would you like to know about LOANS?\n"
    "Please explain:\n"
    "Personal Loans\n"
    "Home Loans\n"
    "SME Loans\n"
    "Others:\n"
    "What are LOANS? How do they work?\n"
    "Loan Calculatorn\n"
    "What would you recommend for me?"<<endl;

}

//if cards
void cards(){       
    cout<<"What would you like to know about BANK CARDS?\n";
    
}

//if saving account
void savingaccount(){
    cout<<"What would you like to know about SAVINGS ACCOUNT?\n";
}

//if investment
void investment(){
    cout<<"What would you like to know about INVESTMENTS?\n";
}

//if insurance
void insurance(){
    cout<<"What would you like to know about INSURANCE?\n";
}

//if retirementplan
void retirementplan(){
    cout<<"What would you like to know about RETIREMENT PLANS?\n";
}

//if remittances
void remittances(){
    cout<<"What would you like to know about REMITTANCES?\n";
}



int main() {
    int x;
    string name;
    string choice;
    cout<<"Hi im PISO\n";
    cout<< "Please enter your name:";
    getline(cin,name);
    cout<<"Hi "<<name<<" How can I assist you today?\n"
    "\n1.Loans\n"
    "2.Cards\n"
    "3.Saving Account\n"
    "4.Investment\n"
    "5.Insurance\n"
    "6.Retirement Plan\n"
    "7.Remittances\n\n"<<endl;
    getline(cin,choice);
    cout<<"";
    string numbers[7] = {"Loans","Cards","Saving Account","Investment","Insurance","Retirement Plan","Remittances"};
    
    if(choicecheck(choice,numbers[0])||choice=="1"){//Loans
        loans();
    }else if(choicecheck(choice,numbers[1])||choice=="2"){//Cards
        cards();
    }else if(choicecheck(choice,numbers[2])||choice=="3"){//Saving Account
        savingaccount();
    }else if(choicecheck(choice,numbers[3])||choice=="4"){//Investment
        investment();
    }else if(choicecheck(choice,numbers[4])||choice=="5"){//Insurance
        insurance();
    }else if(choicecheck(choice,numbers[5])||choice=="6"){//Retirement Plan
        retirementplan();
    }else if(choicecheck(choice,numbers[6])||choice=="7"){//Remittances
        remittances();
    }
    else{
        cout<<"I cannot understand please try again.";
    }
    
    system("pause");
    
    cout<<"ponkan";
}
