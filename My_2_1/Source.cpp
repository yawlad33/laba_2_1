#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	cout << "Введите поочередно коэфициенты a b c: ";
	cin >> a >> b >> c;

	cout << "Общий вид квадратного уравнения: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
	float D = b * b - 4 * a * c;

	if (D > 0) {
		float x1 = (-b + sqrt(D)) / (2 * a);
		float x2 = (-b - sqrt(D)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (D == 0) {
		float x = (-b) / (2 * a);
		cout << "Уравнение имеет единственный корень: " << x << endl;
	}
	else {
		cout << "Данное уравнение не имеет действительных корней";
	}

	return 0;
}
