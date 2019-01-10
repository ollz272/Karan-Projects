#include <iostream>
#include <math.h>
#include <iomanip>

/*  fibonacci
*/


int fibbonacirecursion(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fibbonacirecursion(n-1) + fibbonacirecursion(n -2);
}

int fibbonaciloop(int n)
{
    if(n == 0)
    {
		return 0;
    }
	if(n == 1)
	{
	    return 1;
	}
    int storeone = 0;
    int storetwo = 1;
    int fibbonaci;
    for( int i = 1 ; i <= n ; i++)
    {
        fibbonaci  = storeone + storetwo;
        storeone = storetwo;
        storetwo = fibbonaci;
    }
    return fibbonaci;
}


int main()
{
	std::cout << "how many fibonnaci numbers would you like to see?" << std::endl;
	int n;
	std::cin >> n;
	for(int i = 1; i <= n; i++)
	{
	    std::cout << fibbonaciloop(i-1) << "," ;
	}
	return 0;
}
