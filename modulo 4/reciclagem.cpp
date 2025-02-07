#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>      
#include <stdlib.h>
#include <time.h>
string nomes[999];
string vrido[15] = { "janela","garrafa de vidro", "portas de vidro", "relogio","copos de vidro", "lampadas","oculos","lustres","frascos","potes","monitor","mesa de vidro","prato","taça","brincos" };
string plmt[15] = { "copos de plastico","pacote de batatas","isqueiro","faca","garfo","colher","panela","frascos de shampoo","embalagens","mascaras","embalagem de detergente", "Garrafa de plastico","produtos de limpeza","piercing","garrafas de metal" };
string papel[15] = { "folha","cadernos","livros","papelao","cartazes","caixas de papel","bonecos","jornal","revista","envelope","caixa de papelao","cartolina","papel higienico","folha de papel sulfite","caixa de cereal" };
string random[45] = { "janela","garrafa de vidro", "portas de vidro", "relogio","copos de vidro", "lampadas","oculos","lustres","frascos","potes","monitor","mesa de vidro","prato","taca","brincos","copos de plastico","pacote de batatas","isqueiro","faca","garfo","colher","panela","frascos de shampoo","embalagens","mascaras","embalagem de detergente", "Garrafa de plastico","produtos de limpeza","piercing","garrafas de metal","folha","cadernos","livros","papelao","cartazes","caixas de papel","bonecos","jornal","revista","envelope","caixa de papelao","cartolina","papel higienico","folha de papel sulfite","caixa de cereal" };
int i, j, Jj;
int pontos[99][50];
int contar[1];
void raking()
{
	
}
void multiplayer()
{
	int contar2 = 0;
	int contar = 0;
	do
	{
		int p = 0;
		int material;


		srand(time(0));
		for (i = 0; i < 45; i++)
		{
			p = rand() % 46;
		}
		for (i = 0; i < 1; i++)
		{
			cout << random[p] << "\n";
		}
		cout << " a que material isso pertence? vidro(1), plastico/metal(2) ou papel(3)? \n ";
		cin >> material;
		contar2 = contar2 + 1;
		/*cout << contar2 << "\n"; */
		switch (material)
		{
		case 1:
			for (i = 0; i < 15; i++)
			{
				if (random[p] == vrido[i])
				{
					contar = contar + 5;
				}
			}

		case 2:
			for (i = 0; i < 15; i++)
			{
				if (random[p] == plmt[i])
				{
					contar = contar + 5;
				}
			}

		case 3:
			for (i = 0; i < 15; i++)
			{
				if (random[p] == papel[i])
				{
					contar = contar + 5;
				}
			}

		}

	} while (contar2 != 10);
	for (i = 0; i < Jj; i++)
	{
		cout << "introduza seu nome ";
		cin >> nomes[i];
	}
	
	

	

}
void jogar()
{
	int contar2 = 0;
	int contar = 0;
	do
	{
int p = 0;
	int material;
	
	
	srand(time(0));
	for (i = 0; i < 45; i++)
	{
		p = rand() % 46;
	}
	for (i = 0; i < 1; i++)
	{
		cout << random[p] << "\n";
	}
	cout << " a que material isso pertence? vidro(1), plastico/metal(2) ou papel(3)? \n ";
	cin >> material;
	contar2 = contar2 + 1;
	/*cout << contar2 << "\n"; */
	switch (material)
	{
	case 1:
		for (i = 0; i < 15; i++)
		{
			if (random[p] == vrido[i])
			{
				contar = contar + 5;
			}
		}
		
	case 2:
		for (i = 0; i < 15; i++)
		{
			if (random[p] == plmt[i])
			{
				contar = contar + 5;
			}
		}
		
	case 3:
		for (i = 0; i < 15; i++)
		{
			if (random[p] == papel[i])
			{
				
			}
		}
			
	}
	
	} while (contar2 != 10);

	cout << contar;
	
		
	
	
}

void main()
{
	int esc;
	cout << "jogar(1), ver o ranking(2) ou sair?(0)";
	cin >> esc;

	switch (esc)
	{
	case 0:
		cout << "programa encerrado";
		break;
	case 1:
		cout << " quantas pessoas vao jogar? ";
		cin >> Jj;
		for (i = 0; i < Jj; i++)
		{
			nomes[i] = Jj;
		}
		
		if (Jj > 1)
	{
		cout << " a entrar no modo multiplayer... \n ";
		multiplayer();
	}
	else
	{
		jogar();
	}
		break;
	case 2:

		break;
	}
}