#include<iostream>
#include<conio.h>

using namespace std;
 class Bank{
     private:
          char name[30];
          char Accname[20];
          char type[10];
          int  ibalance;
          int  dop;
          int  with;
     public:
          void menu(void);
          void get(void);
          void deposite(void);
          void check(void);
          void withdraw(void);
          void info(void);
 };
void Bank::menu()
{
    int me;
    cout<<"\t\nChoose your Option from 1 To 6\n";
    cout<<"\t1.Create a New Account\n";
    cout<<"\t2.Deposite Your Money\n";
    cout<<"\t3.Check Your Balance\n";
    cout<<"\t4.Withdraw Amount\n";
    cout<<"\t5.Your Account's All Info\n";
    cout<<"\t6.Exit\n";
    cin>>me;

switch(me)
       {
          case 1:
               get();
          case 2:
               deposite();
               break;
          case 3:
               check();
               break;
          case 4:
               withdraw();
               break;
          case 5:
               info();
               break;

       }
}
void Bank::get()
{
    int go;
    cout<<"\t\t\nEnter Name :";
    cin>>name;
    cout<<"\n";
    cout<<"\t\tEnter Account Name :";
    cin>>Accname;
    cout<<"\n";
    cout<<"\t\tEnter Your Type Account :";
    cin>>type;
    cout<<"\n";
    cout<<"\t\tHow much Money You wanna Deposite? :";
    cout<<"\n\t\t";
    cin>>ibalance;
    cout<<"\n\t\tPress 0 for GoTo MainMenu:";
    cout<<"\n";
    cin>>go;
    if(go==0)
    {
        menu();
    }
    else
        return;
}
void Bank::deposite()
{
    int go;
    cout<<"\n\t\tHow much Money You wanna Deposite?:\n";
    cout<<"\t\t";
    cin>>dop;
    dop+=ibalance;
     cout<<"\n\t\tPress 0 for Go To Main Menu:";
    cout<<"\n";
    cin>>go;
    if(go==0)
     {
       menu();
     }
}
void Bank::check()
    {   int go;
        cout<<"\t\tYour Current Balance:"<<dop<<"\n\t";
        cout<<"\n\t\tPress 0 for Go To Main Menu:";
        cout<<"\n";
        cin>>go;
        if(go==0)
      {
      menu();
      }
    }

void Bank::withdraw()
{
    int go;
    cout<<"\n\tHow Much Money You Wanna withdraw?\n";
    cout<<"\t\t";
    cin>>with;
    dop-=with;
    cout<<"\n\tAfter withdrawing Your Balance:"<<dop<<"\n\t";
    cout<<"\n\t\tPress 0 for GoTo MainMenu:";
    cout<<"\n";
    cin>>go;
    if(go==0)
      {
      menu();
      }

}
void Bank::info()
{
    int go;
    cout<<"\n\t\tName of the Depositor :"<<name<<"\n";
    cout<<"\t\t Name of the Account :"<<Accname<<"\n";
    cout<<"\t\t Type of  Account :"<<type<<"\n";
    cout<<"\t\t Amount of Your Account :"<<dop;
     cout<<"\n\t\tPress 0 for Go To Main Menu:";
    cout<<"\n";
    cin>>go;
    if(go==0)
      {
      menu();
      }
}
int main()
{
    Bank obj;
    obj.menu();
    getch();
    return 0;
}
