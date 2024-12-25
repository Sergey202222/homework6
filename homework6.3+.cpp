#include <iostream>

unsigned long long fibonacci(int);

int main()
{
	setlocale(LC_ALL, "rus");
	int number{};
	std::cout << "Ââåäèòå ÷èñëî: ";
	std::cin >> number;
	std::cout << "×èñëà Ôèáîíà÷÷è: ";
	for (int iNumber{ 1 }; iNumber <= number; ++iNumber)
	{
		std::cout << fibonacci(iNumber) << ' ';
	}
	return EXIT_SUCCESS;
}

unsigned long long fibonacci(int number)
{
	switch (number)
	{
	case 1:
		return 0;
	case 2: 
		return 1;

	default:
		unsigned long long penultimateNumber{}, lastNumber{ 1 }, numberFibonacci{};
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
