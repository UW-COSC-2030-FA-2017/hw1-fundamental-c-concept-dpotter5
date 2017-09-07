#include <iostream>
using namespace std;

int add1 (int input) //function that takes an integer, adds 1 to it and then reuturns the result.
{
  int result;
  result = input + 1;
  return result; 
}

int main ()
{
  int test = add1(2); //Here we pass 2 as the argument for the function. The function does its thing and then returns the argument + 1.
  cout << "2 + 1 = " << test; //Prints out our result.
}
