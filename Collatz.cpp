#include <iostream>
#include <math.h>
#include <iomanip>

/*  collatz conjecture
*/

int Collzat( int num)
{
    std::cout << num;
	int counter;
	while (num !=1)
	{
		if( num%2 == 0)
		{
			num /= 2;
		}
		else
		{
			num = 3*num + 1;
		}
		counter++;
		std::cout<< "-->"  <<num ;
	}
	return counter;
}


int main ()
{
	std::cout << "Enter a number" << std::endl;
	int num;
	std::cin >> num ;
	std::cout << std::endl << "The algorithm took " << Collzat(num) << " iterations before reaching 1.";
	return 0;
}
