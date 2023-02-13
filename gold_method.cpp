#include <iostream>
#include <cmath>

const float E = 0.001;

using namespace std;

float f(float x){
	return x*x*x-5*x+1;
}
void metod_Golden_Ratio(float a, float b)
{
	long nIter = 1;
	double  xmin;
	double t = (sqrt(5) - 1)*0.5;

	double x1 = t * a + (1 - t)*b;
	double x2 = (1 - t)*a + t * b;
	while (E <= std::abs(b - a)){
		if (f(x2) < f(x1))
			a = x1;
		else
			b = x2;
		x1 = t * a + (1 - t)*b;
		x2 = (1 - t)*a + t * b;
	}
	cout << "X_min =  " << (xmin = (a + b)*0.5) << endl;
	cout << "f(xmin) =  " << f(xmin) << endl;
}

int main()
{
	float a, b;
	cout<<"Введите начало отрезка ";
	cin>>a;
	cout<<"Введите начало отрезка ";
	cin>>b;
	cout << "Метод золотого сечения: " << endl;
	metod_Golden_Ratio(a, b);
}