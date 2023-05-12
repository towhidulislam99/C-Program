#include<iostream>
#include<conio.h>

using namespace std;
class Calculator{
public:
    int result;
    int value;
    int num1;
    int num2;
    int ans;
    char option;
    void set_value(){
        do{
int value,result;
cout<<"What operation do you want to do? \n";
cout<<"Press 1 for Addition.\n";
cout<<"Press 2 for Substraction.\n";
cout<<"Press 3 for Multification.\n";
cout<<"Press 4 for Divition.\n";
cin>>value;
cout<<"Please Enter a Frist Number: ";
cin>>num1;
cout<<"Please Enter a Second Number:";
cin>>num2;

switch(value){
case 1:result=num1+num2;
cout<<"Addition of two Number is:"<<result;
break;
case 2:result=num1-num2;
cout<<"Subtraction of two Number is:"<<result;
break;
case 3:result=num1*num2;
cout<<"Multification of two Number is:"<<result;
break;
case 5:result=num1/num2;
cout<<"Divition of two Number is:"<<result;
break;
default:
cout<<"Rong Input";
}
ans=result;
cout<<"Do you want to continue Y/N \n";
option=getche();
}
while(option=="Y");
    }
   void get_value(){
   cout<<"the result is:"<<result;
   }
};


int main(){
Calculator calculator;
calculator.set_value();
calculator.get_value();

return 0;
}
