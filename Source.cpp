#include <iostream>
using namespace std; 
int main() {
	//Series1◦.Даны десять вещественных чисел.Найти их сумму.
	/*double x, sum = 0;
	int i = 1;
	while (i <= 10) {
	cin >> x;
	sum += x;
	i++;
	}
	cout << sum;*/

	//Series2.Даны десять вещественных чисел.Найти их произведение.
	double x, pro = 1;
	int i = 1;
	while (i <= 10) {
		for (i = 1; i <= 10; ++i) {
			cin >> x;
			pro += x;
			i = i * x;
		}
		cout << pro;
	}
	
	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
	/*double x, arefm = 1;
	int i = 1;
	arefm = x;
	while (i <= 10) {
		for (i = 1; i >= 10 )
	}*/	


}