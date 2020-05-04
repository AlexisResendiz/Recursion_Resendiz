//Alexis Resendiz COSC 1437, DR_T, 5/2/2020
//Recursion: The process in which a function calls itself directly or indirectly
//External source used:https://www.geeksforgeeks.org/recursion/
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

void towersOfHanoi(int, int, int, int);
int factorialIR(int);

int main() 
{
  int number;
  //Towers of Hanoi
  cout << "\nPlease enter the number of disk:";
  number = validateInt(number);
  towersOfHanoi(number,1,3,2);

  //Factorial using recursive
  cout << "\nEnter a number and I will display its factorial. ";
  number = validateInt(number);

  cout << "\nThe factorial of " << number << " is " << factorialIR(number) << endl;

  return 0;
}

void towersOfHanoi(int count, int stick1, int stick3, int stick2)
{
  if(count > 0)
  {
    towersOfHanoi(count - 1, stick1, stick2, stick3);
    cout << "Move disk " << count << " from " << stick1 << " to " << stick3 << endl;
    towersOfHanoi(count - 1, stick2, stick3, stick1);
  }
}

int factorialIR(int n)
{
  if(n == 0)
    return 1;
  else
    return n * factorialIR(n -1);
}