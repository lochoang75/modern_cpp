#include <iostream>

void Add(int a, int b, int &result);
void Swap(int &a, int &b);
void Factorial(int a, int &result);

int main()
{
	int a = 5;
	int b = 3;
	int result;
	Add(a, b, result);
	std::cout << "Test Add " << a << " + " << b << " = " << result << "\n";
	std::cout << "Test Swap " << a << " " << b << " to "; Swap(a, b); std::cout << a << " " << b << "\n";
	Factorial(a, result);
	std::cout << "Test Factorial " << a << " = " << result <<"\n";

	return 0;
}

void Add(int a, int b, int &result)
{
	result = a + b;
}

void Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void Factorial(int a, int &result)
{
	result = 1;
	for (int i = 1; i < a + 1; i++)
	{
		result = result * i;
	}
}
