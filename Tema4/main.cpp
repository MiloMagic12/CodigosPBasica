#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a;
    int b;
    cout << "Agrega el primer número"<< "\n";
    cin >> a;
    cout << "Agrega el segundo número"<< "\n";
    cin >> b;
    int S = a + b;
    int P = a *b;
	cout << "a+b=" << S << "\n";
    cout << "a*b=" << P << "\n";
	return 0;
}
