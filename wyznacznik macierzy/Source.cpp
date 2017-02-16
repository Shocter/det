#include <iostream>
using namespace std;

int main()
{
	int w, k, wartosc, wyznacznik;
	cout << "Podaj liczbe wierszy: ";
	cin >> w;
	cout << "Podaj liczbe kolum: ";
	cin >> k;
	if (w != k)
		cout << "Aby policzyc wyznacznik liczba wierszy musi byc rowna liczbie kolumn" << endl;

	int **tab = new int * [w];
	for (int i = 0; i < w; i++)
	{
		tab[i] = new int[k];
		for (int j = 0; j < k; j++)
		{
			cout << "Podaj wartosc do wpisania do macierzy: ";
			cin >> wartosc;
			tab[i][j] = wartosc;
		}
	}

	if (w == 2 && k == 2)
		wyznacznik = tab[0][0] * tab[1][1] - tab[0][1] * tab[1][0];

	if (w == 3 && k == 3)
		wyznacznik = tab[0][0] * tab[1][1] * tab[2][2] + tab[1][0] * tab[2][1] * tab[0][2] + tab[2][0] * tab[0][1] * tab[1][2] - tab[0][2] * tab[1][1] * tab[2][0] - tab[1][2] * tab[2][1] * tab[0][0] - tab[2][2] * tab[0][1] * tab[1][0];


	cout << "Twoja macierz wyglada tak: " << endl;
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
	cout << "Natomiast jej wyznacznik jest rowny: " << wyznacznik << endl;
	system("pause");
	return 0;
}