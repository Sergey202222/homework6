#include <iostream>

int fibonacci(int);

int main()
{
	setlocale(LC_ALL, "rus");
	int number{};
	std::cout << "������� �����: ";
	std::cin >> number;
	std::cout << "����� ���������: ";
	for (int iNumber{1}; iNumber <= number; ++iNumber)
	{
		std::cout << fibonacci(iNumber) << ' ';
	}
	return EXIT_SUCCESS;
}

int fibonacci(int number)
{
	if (number == 1)
	{
		return 0;
	}
	else if (number == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(number - 1) + fibonacci(number - 2);
	}
}