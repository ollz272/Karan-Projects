#include <iostream>
/*  fibonacci
*/
double fibbonaci(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
	return 1;
  return fibbonaci(n-1) + fibbonaci (n -2);
}


int main()
{
	std::cout << "how many fibonnaci numbers would you like to see?" << std::endl;
	int n;
	std::cin >> n;
	for(int i = 1; i <= n; i++)
	{
	    std::cout << fibbonaci(i-1) << "," ;
	}
	return 0;
}
