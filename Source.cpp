#include <iostream>
using namespace std;

void fizzBuzz(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			cout << i << endl;
		}
		else if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				cout << "FizzBuzz" << endl;
			}
			else
			{
				cout << "Fizz" << endl;
			}
		}
		else
		{
			cout << "Buzz" << endl;
		}
	}
}

int main()
{
	fizzBuzz(15);

	return 0;
}
