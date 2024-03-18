#include<iostream>
using namespace std;

float Summation(float Number1,float Number2)
{
    return Number1+Number2;
}
float Subtraction(float Number1,float Number2)
{
    return Number1-Number2;
}
float Multiplication(float Number1,float Number2)
{
    return Number1*Number2;
}
float Devision(float Number1,float Number2)
{
    return Number1/Number2;
}
int main()
{
float Number1,Number2;
cout<<"Enter your Number 1 : ";cin>>Number1;
cout<<"Enter your Number 2 : ";cin>>Number2;
cout<<"Summation : "<<Number1 <<"+"<<Number2 <<" = "<<Summation(Number1,Number2)<<endl;
cout<<"Subtraction : "<<Number1 <<"-"<<Number2 <<" = "<<Subtraction(Number1,Number2)<<endl;
cout<<"Multiplication : "<<Number1 <<"*"<<Number2 <<" = "<<Multiplication(Number1,Number2)<<endl;
cout<<"Devision : "<<Number1 <<"/"<<Number2 <<" = "<<Devision(Number1,Number2)<<endl;
cout<<"Exit!!";
return 0;
}