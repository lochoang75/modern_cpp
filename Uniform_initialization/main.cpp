#include <iostream>
#include <string>

std::string fmt_array(int* array, int size)
{
	std::string ret_string{};
	for (int i = 0; i < size; i++)
	{
		ret_string.append(" ");
		ret_string += std::to_string(array[i]);
	}
	return ret_string;
}

std::string fmt_array(char* array, int size)
{
	std::string ret_string{};
	for (int i = 0; i < size; i++)
	{
		ret_string.append(" ");
		ret_string += std::to_string(array[i]);
	}
	return ret_string;
}

int main() {
	int a1 = 0;
	int a2 = 0;
	int a3(5);
	int a4{ 10 };
	std::cout << "a1 " << a1 << " a2 " << a2 << " a3 " << a3 << " a4 " << a4 << "\n";

	int uniform_decimal_array[5]{ 0, 1, 2, 3, 4 };
	int uniform_incompleted_array[5]{ 0, 1, 2 };
	int uniform_empty_array[5]{};

	std::cout << "uniform_decimal_array " << fmt_array(uniform_decimal_array, 5) << "\n";
	std::cout << "uniform_incompleted_array " << fmt_array(uniform_incompleted_array, 5) << "\n";
	std::cout << "uniform_emptry_array " << fmt_array(uniform_empty_array, 5)<< "\n";

	char uniform_array[20]{ "Hello Elliot" };
	std::cout << uniform_array << "\n";

	return 0;
}