#include <iostream>
using namespace std;
void media(int n[10])
{
	int i, somar = 0;
	for (i = 0; i < 10; i++)
	{
		somar = somar + n[i];
	}
	cout << "media e " << (somar / 10);
}
void maior(int n1[10])
{
	int i, j, verificar[1];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (verificar[0] < n1[i])
			{
				verificar[j] = n1[i];
			}
		}
	}
	cout << "o maior e " << verificar[0];
}
void menor(int n2[10])
{
	int i, j, verificar2[1];
	verificar2[0] = n2[0];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (verificar2[0] > n2[i])
			{
				verificar2[j] = n2[i];
			}
		}
	}
	cout << "o menor numero e " << verificar2[0];
}
void main()
{
	int numeros[10], i, escolha;
	for (i = 0; i < 10; i++)
	{
		cin >> numeros[i];
	}
	cout << "queres ver a media(1), ver o maior(2) ou ver o menor(3)?";
	cin >> escolha;
	switch (escolha)
	{
	case 1: media(numeros);
		break;
	case 2: maior(numeros);
		break;
	case 3:
		menor(numeros);
		break;
	}
}

