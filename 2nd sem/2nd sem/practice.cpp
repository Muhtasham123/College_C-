#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int s = 3; s > i; s--)
		{
			cout << " ";
		}
		for (int j = 1; j < i * 2; j++)
		{
			cout << "*";
		}
		cout << endl;
   }
	for (int k = 1; k <= 2; k++)
	{
		for (int c = 1; c <= k; c++)
		{
			cout << " ";
		}
		for (int x = 3; x >= k; x -= k)
		{
			cout << "*";
		}
		cout << endl;
	}

}