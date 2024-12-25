#include <iostream>

long long fibonacci(long long);

int main()
{
	setlocale(LC_ALL, "rus");
	int number{};
	std::cout << "Введите число: ";
	std::cin >> number;
	std::cout << "Числа Фибоначчи: ";
	for (int iNumber{ 1 }; iNumber <= number; ++iNumber)
	{
		std::cout << fibonacci(iNumber) << ' ';
	}
	return EXIT_SUCCESS;
}

long long fibonacci(long long number)
{
	switch (number)
	{
	case 1:
		return 0;
	case 2: 
		return 1;

	default:
		long long penultimateNumber{}, lastNumber{ 1 }, numberFibonacci{};
		int iteration{2};
		while (iteration < number)
		{
			numberFibonacci = penultimateNumber + lastNumber;
			penultimateNumber = lastNumber;
			lastNumber = numberFibonacci;
			++iteration;
		}
		return numberFibonacci;
	}
}