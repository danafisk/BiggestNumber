//Author:
#include<iostream>

int main()
{
  //declare variables here
int firstnumber;
int secondnumber;
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>firstnumber;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  
  std::cin>>secondnumber;

  //determine if first or second is bigger and store that in a third variable
  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
if (firstnumber > secondnumber)
{std::cout<<firstnumber;}

if (secondnumber > firstnumber)
{std::cout<<secondnumber;}

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
