//Validation input credit goes to Dr. T! Thank you for the invaluable source.

#include <iostream>
#include <iomanip>
#include <string>
#include "Input_Validation.h"

using namespace std;

int main() 
{
  int firstNum;
  int secondNum;
  char op;
  string operation;
  
  
  cout << "First Number: ";
  firstNum = validateInt(firstNum);
  
  cout << "Second Number: ";
  secondNum = validateInt(secondNum);
  
  cout << "Enter operator: ";
  cin >> operation;
  
  if (operation == "add" || operation == "+")
    op = '+';
  if (operation == "subtract" || operation == "-")
    op = '-';
  if (operation == "multiply" || operation == "*")
    op = '*';
  if (operation == "divide" || operation == "/")
    op = '/';
  
  switch(op)
  {
    case '+':
    cout << firstNum + secondNum << endl; 
    break;
    
    case '-':
     cout << firstNum - secondNum << endl;
    break;
    
    case '*':
     cout << firstNum * secondNum << endl;
    break;
    
    case '/':
     if(secondNum !=0)
      cout << firstNum / secondNum << endl;
     else
      cout << "ERROR! \nCannot divide by zero." << endl;
    break;
    
    default:
    cout << "Illegal operation" << endl;
  }
  
  return 0;
}