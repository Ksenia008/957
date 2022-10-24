#include <iostream>
using namespace std;
int main() {
	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cout << '@';
	}*/
	/*int x, y, i, sum = 0;
	cout << "Vvedite x:";
	cin >> x;
	cout << "Vvedite y:";
	i = x;
	while (i <= y) {
		if (i % 2 == 0) {
			sum += 1;
		}
		i++;
	}
	cout << sum << endl;*/
	/*//Дано 2 числa х и у (х<у).Напечатать нечетные числа в порядке убывания.*/
	/*int x, y;
	cout << "Vvedite x:";
	cin >> x;
	cout << "Vvedite y:";
	for (int i = y; i <= x; i++) {
		if (i % 2 != 0) {
		}
	}
	cout << i<< endl;*/
	/*//Напечатать прямоугольник 20х8 из символов #.*/
	/*for (int i = 1; i <= 20; i += 1) cout << '#';
	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << '#';
		for (int k = 1; k < 19; k += 1) cout << ' ';
		cout << '#' << endl;
	}
		for (int i = 1; i <= 20; i += 1) cout << '#';
	cout << endl;*/
	/*While
	int n;
	cin >> n;
	int i = 1;
	int pr = 1;
	while (i <= n) {
		if (i % 3 == 0) {
			pr *= i;
		}
		i+=1;
	}
	cout << pr;*/
	/*For18
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; n > i; i += 1) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			sum += 1;
		}
		i += 1;
	}
	cout << sum << endl;*/
	//While22◦
	// Дано натуральное н. Вычислить 1+1/2 + 1/3 ... + 1/n.
	int n;
	cin >> n;
	int i = 1;
	int sum = 0;
	int dl = 1 / n;
	while (i<n) {
		if () {
			sum += 1;
		}
		i += 1;
	}
	cout << dl;
	system("pause");

}