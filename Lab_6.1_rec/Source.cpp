#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(5) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Sum(int* a, const int size, int i, int S)
{
	if (a[i] < 0 && !(i % 3 == 0))
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}			
int Number(int* a, const int size, int i)
{
	if (i >= size) 
	{
		return 0;
	}
	int count = Number(a,size,i+1);
	if (a[i] < 0 && !(i % 3 == 0))
	{
		count++;
	}
	
		return count;

}
void Replace(int* a, const int size, int i)
{
	if (i >= size) 
	{
		return;
	}
	if (a[i] < 0 && !(i % 3 == 0))
		a[i] = 0;
	
	Replace(a, size, i + 1);
	
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -11;
	int High = 13;
	Create(a, n, Low, High, 0);
	cout << "Unmodified ";
	Print(a, n, 0);

	int sum = Sum(a, n, 0, 0);
	int count = Number(a, n, 0);
	Replace(a, n, 0);
	//cout << "S = " << Sum(a, n, 0, 0) << endl;
	cout << "Modified ";
	Print(a, n, 0);

	cout << "Number of elements " << count << endl;
	cout << "S = " << sum << endl;

	return 0;
}

