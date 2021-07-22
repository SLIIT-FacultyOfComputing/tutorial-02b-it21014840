/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;  //input a value
  std::cout << "Enter a value for r ";
  std::cin >> r;  //input a value
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
	int r = 1;
	for(int i = 2 ; i <= no ; i++){
		r = r * i;
	}
	return r;
}
long nCr(int n, int r)
{
	return Factorial(n) / (Factorial(r) * Factorial(n-r));
}
