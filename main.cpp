//Functions
#include<iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Factorial(int a);
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Diff(a, b) << endl;
	cout << a << "*" << b << "=" << Prod(a, b) << endl;
	cout << a << "/" << b << "=" << Quot(a, b) << endl;
	cout << a << " ! " << " = " << Factorial(a) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
}
int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quot(int a, int b)
{
	return (double)a / b;
}
int Factorial(int a)
{
	int Factorial = 1;
	for (int i = 1; i <= a; i++)
	{
		Factorial *= i;
	}
	return Factorial;
}
int Power(int a, int b)
{
	int result = 1;
	for (int i = 1; i <= b; i++)
	{
		result *= a;
	}
	return result;
}