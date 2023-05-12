#include<iostream>
using namespace std;
class account
{
public:
int sentmoney;
int acc_no;
float balance;
void get_data()
{
cout<<"\nEnter account No. : ";
cin>>acc_no;
cout<<"\nEnter balance : ";
cin>>balance;
}
void display()
{
cout<<"\nAccount No. is "<<acc_no;
cout<<"\nBalance is "<<balance;
}
void moneytransfer1(account &ac , float amount)
{
balance = balance - amount;
ac.balance = ac.balance+amount;
}
void moneytransfer2(account &ac , float amount)
{
balance = balance + amount;
ac.balance = ac.balance - amount;
}
};
int main()
{
int trans_money;
char ch1,ch2;
account acc1,acc2;
acc1.get_data();
acc2.get_data();
cout<<"\nAccount information\n\n";
acc1.display();
acc2.display();
cout<<"\n\n\nEnter Option1 : ";
cin>>ch1;
if(ch1 == '1')
{
cout<<"\n\n\n\nHow much money is transferred from acc2 to acc1 : ";
cin>>trans_money;
if(acc2.balance > trans_money)
acc1.moneytransfer2(acc2 , trans_money);
else
cout<<"\nMoney can't be transferred !!!";
}
cout<<"\n\n\nEnter Option2 : ";
cin>>ch2;
if(ch2 == '2')
{
cout<<"\n\n\n\nHow much money is transferred from acc1 to acc2 : ";
cin>>trans_money;
if(acc1.balance > trans_money)
acc2.moneytransfer1(acc1 , trans_money);
else
cout<<"\nMoney can't be transferred !!!";
}
cout<<"\nUpdated Information\n\n";
acc1.display();
acc2.display();

}
