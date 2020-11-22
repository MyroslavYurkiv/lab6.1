#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 5 == 0)
			S += a[i];
	return S;
}
int Num(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 5 == 0)
			S += 1;
	return S;
}
void Change(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 5 == 0)
			a[i] = 0;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int b[n];
	int Low = -40;
	int High = 50;
	Create(b, n, Low, High);
	Print(b, n);
	cout << " Sum = " << Sum(b, n) << endl;
	cout << " Num = " << Num(b, n) << endl;
	Change(b, n);
	Print(b, n);
	return 0;
}


