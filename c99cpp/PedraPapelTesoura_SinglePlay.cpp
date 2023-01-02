#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;

int main()
{
	string fPla,sPla;
	int winner;
	string cVal[3];
	cVal[0] = "pedra";
	cVal[1] = "papel";
	cVal[2] = "tesoura";
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Escolha a sua opção jogador: ";
	cin >> fPla;
	
	//	Gerando um número aleatorio, pegando como ponto de referência os segundos
	srand((unsigned)time(0));
	int rPos = rand()%3;
	
	// Escolhendo a opção da maquina
	sPla = cVal[rPos];
	cout << "Então eu escolho " << sPla << endl;
	
	if(fPla == sPla) cout << "Empate" << endl;
	else
	{
		if(fPla == "pedra")
			sPla == "papel"? winner = 2 : winner = 1;	
		else if(fPla == "papel")
		{
			sPla == "tesoura"? winner = 2 : winner = 1;
		}
		else if(fPla == "tesoura")
		{
			sPla == "pedra"? winner = 2 : winner = 1;
		}
		
		if(winner == 1) cout << "Você ganhou!" << endl;
		else cout << "Eu ganhei!" << endl;
	}
}
