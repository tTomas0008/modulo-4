#include <iostream>
#include <string>
using namespace std;
string filmess[4] = { "odisseia no espaco", "o padrinho", "os salteadores da arca perdida", "a lista do alemao" };
void filmes(int p = 0)
{
	int filmesnn[4];
	int j, i, filmesn[4];
	int nota = 0;
	for (i = 0; i < 4; i++)
	{
		cout << "qual a nota no filme " << filmess[i] << "\n";
		cin >> filmesn[i];
		
	}
	for (i = 0; i < 4; i++)
	{
		if (nota < filmesn[i])
		{
			nota = filmesn[i];
		}
		
	}
	for (i = 0; i < 4; i++)
	{
		if (nota == filmesn[i])
		{
			p = i;
		}
	}
		cout << "o filme mais melhor foi " << filmess[p];
}
void main()
{
	int k = 0;
	int i;
	int escolha;
	cout << "queres avaliar os filmes(1), avaliar as categorias(2), ver melhor em cada categoria(3) ou sair?(0)";
	cin >> escolha;
	switch (escolha)
	{
	case 0: 
		cout << "programa encerrado";
		break;
	case 1: 
	filmes(k);
		break;
	}
	

}
