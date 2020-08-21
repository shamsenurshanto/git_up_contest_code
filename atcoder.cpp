// Id : 180104128


#include <bits/stdc++.h>
using namespace std;

double f(double x)
{	 double p = pow(x,3)*5-16*(pow(x,2))+13*x-2;;
    return  p;
}
void sec(double a, double b, double E)
{
	double n = 0, xm, x, c;
	if (f(a) * f(b) <= 0) {
            while (fabs((xm - x)/xm) >= E)
		 {
			x = (a * f(b) - b * f(a)) / (f(b) - f(a));
			c = f(a) * f(x);
			a = b;
			b = x;
			n++;
			xm = (a * f(b) - b * f(a)) / (f(b) - f(a));
		}
		cout << "Root of the given equation=" << x << endl;
		cout << " iterations = " << n << endl;
	} else
		cout << "NO root"<<endl;
}
int main()
{
    double x1 = 0, x2 = 1, e = 0.0001;
	sec(x1, x2, e);
}
