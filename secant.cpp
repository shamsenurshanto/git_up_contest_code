#include <bits/stdc++.h>
using namespace std;
/// funcation (5x-1)(x-1)(x-2) = (5*x*x*x) - (16*x*x) + (13*x)-2
float func(float x)
{
    double p = pow(x,3)*5-16*(pow(x,2))+13*x-2;;
    return  p;
}
vector <float> poly;
float horner( float x)
{
    float result = poly[0];

    for (int i=1; i<poly.size(); i++)
        result = result*x + poly[i];

    return result;
}
void secant(float x1, float x2, float e)
{

	float n = 0, xm, x0, c;
	if (func(x1) * func(x2) <= 0) {
		do {
			x0 = (x1 * func(x2) - x2 * func(x1)) / (func(x2) - func(x1));
			cout<<"Value of the given polynomial for root x = " <<x0<<" is = "<<horner(x0)<<endl;
			c = func(x1) * func(x0);
			x1 = x2;
			x2 = x0;
			n++;

			if (c == 0)
				break;
			xm = (x1 * func(x2) - x2 * func(x1)) / (func(x2) - func(x1));
		} while (fabs((xm - x0)/xm) >= e);

		cout << "Root of the given equation=" << x0 << endl;
		cout << "No. of iterations = " << n << endl;
	} else
		cout << "Can not find a root in the given inteval"<<endl;
}
int main()
{
    poly.push_back(5);
    poly.push_back(-16);
    poly.push_back(13);
    poly.push_back(-2);
      float x1 = 0, x2 = 1;
    secant(x1, x2, .001);
}


