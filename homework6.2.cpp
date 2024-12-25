#include <iostream>

void myPower(int value, int power);

int main()
{
	setlocale(LC_ALL, "rus");
	int value = 5, power = 2;
	myPower(value, power);
	value = 3;
	power = 3;
	myPower(value, power);
	value = 4;
	power = 4;
	myPower(value, power);
	return EXIT_SUCCESS;
}

void myPower(int value, int power)
{
	int result = 1;
	for (int i{}; i < power; i++)
	{
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
}