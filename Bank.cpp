/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-05 1:15:07
 * @modify date 2020-02-05 01:45:01
 * @desc C++ OOPs concept
 */

#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
private:
    char depositorName[50];
    int acctNo;
    int currBal;
public:
   void setValues(char *name,int no,int bal)
   {
       strcpy(depositorName,name);
       acctNo=no;
       currBal=bal;
   }
   void deposit(float depAmt){
       currBal+=depAmt;
   }
   void withdraw(float amt){
       if (currBal<=amt)
       {
           cout<<"Current balance is not sufficient to withdraw. 
                Please try again entering amount less than "<<currBal;
       }
       
       currBal-=amt;
   }
   void display(){
       cout<<depositorName<<"'s current balance is: "<<currBal<<endl;
   }
};

int main(){

    int c,acn;
    char name[20];
    float amt;
    Bank b1;
    cout<<"\nEnter Account no.: "; cin>>acn;
    cout<<"\nEnter Name: "; cin>>name;
    cout<<"\nEnter balance amount: ";cin>>amt;
    b1.setValues(name,acn,amt);
    
    for(int i=1; i>=1; i++){
        cout<<"Enter your choice for: \n1.Deposit\n2.Withdraw\n3.Display\n";
        cin>>c;
        switch (c){ 
        case 1: cout<<"\nEnter amount to be deposited: ";
            cin>>amt;
            b1.deposit(amt);
            break;
        case 2: cout<<"\nEnter amount to be withdrawn: ";
            cin>>amt;
            b1.withdraw(amt);
            break;
        case 3:b1.display();
            break;
        default:cout<<"Please, Make a correct choice";
        break;
    }
}
}


