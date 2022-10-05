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

//function for loans
void loanfunction(){

}

int main() {
    int x;
    string name;
    string choice;
    cout<<"Hi im PISO\n";
    cout<< "Please enter your name:";
    getline(cin,name);
    cout<<"Hi"<<name<<"How can I assist you today?\n\n  "
    "1.Loans\n"
    "2.Cards\n"
    "3.Saving Account\n"
    "4.Investment\n"
    "5.Insurance\n"
    "6.Retirement Plan\n"
    "7.Remittances\n"<<endl;
    getline(cin,choice);
    cout<<"";
    string numbers[7] = {"Loans","Cards","Saving Account","Investment","Insurance","Retirement Plan","Remittances"};
    
    if(choicecheck(choice,numbers[0])||choice=="1"){//Loans
        cout<<"one";
    }else if(choicecheck(choice,numbers[1])||choice=="2"){//Cards
        cout<<"two";
    }else if(choicecheck(choice,numbers[2])||choice=="3"){//Saving Account
        cout<<"three";
    }else if(choicecheck(choice,numbers[3])||choice=="4"){//Investment
        cout<<"four";
    }else if(choicecheck(choice,numbers[4])||choice=="5"){//Insurance
        cout<<"five";
    }else if(choicecheck(choice,numbers[5])||choice=="6"){//Retirement Plan
        cout<<"six";
    }else if(choicecheck(choice,numbers[6])||choice=="7"){//Remittances
        cout<<"seven";
    }
    else{
        cout<<"I cannot understand please try again.";
    }
    
    system("pause");
}