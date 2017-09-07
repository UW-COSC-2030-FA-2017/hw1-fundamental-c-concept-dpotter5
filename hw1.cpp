#include <iostream>
using namespace std;

int add1 (int input)
{
  int result;
  result = input + 1;
  return result;
}

int main ()
{
  int test = add1(2);
  cout << "2 + 1 = " << test;
}
