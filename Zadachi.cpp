#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	float milk = 89.99;
	float chocolate = 62.49;
	float coffe = 199;

	setlocale(LC_ALL, "Russian");
	cout << "Считаем сумму в чеке" << endl;
	cout << "Введите количество пакетов молока: ";
	cin >> a; cout << endl;

	cout << "Введите количество плиток шоколада: ";
	cin >> b; cout << endl;

	cout << "Введите количество пакетов кофе: ";
	cin >> c; cout << endl;

	cout << "Итоговая сумма в чеке: " << a * milk + b * chocolate + c * coffe;








	return 0;
}