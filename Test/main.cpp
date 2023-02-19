#include <iostream>

int f()
{
	std::cout << "Hello" << std::endl;
	return 1;
}

int n = f();

int main()
{
	std::cout << n << std::endl;
	return 0;
}