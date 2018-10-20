#include <iostream>

using namespace std;

/*int sumn(int n)
{
if (n <= 0) return 0;
int sum = 0;
for (int i; i <= n; ++i) sum += i;
return sum;
}*/
int fibn(int n)
{
	if (n == 1 || n == 2) return 1;
	else return fibn(n - 1) + fibn(n - 2);
}

int main()
{
	int n = 9;
	cout << "The " << n << "th fibonacci number is "
		<< fibn(n) << ".\n";
	return 0;
}