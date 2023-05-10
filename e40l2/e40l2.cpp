/*40. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:
	1. Código da cidade;
	2. Número de veículos de passeio (em 1999);
	3. Número de acidentes de trânsito com vítimas (em 1999). 

	Deseja-se saber:

	1. Qual o maior e menor índice de acidentes de transito e a que cidade	pertence;
	2. Qual a média de veículos nas cinco cidades juntas;
	3. Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.*/

#include <iostream>
using namespace std;

void RetornaMaiorMenor()
{
	int menorAci = 99999;
	int maiorAci = 0;
	int codCidMaior, codCidMenor;
	int contaAci = 0;
	int qtdveiculo = 0;
	int contaVe = 0;
	int contaci = 0;
	int codci = 0;
	int contaciM = 0;
	int op = 1;
	int ope = 0;
	do
	{
		cout << "\nMENU\n 1 - Calculo\n 2 - Sair\n R:";
		cin >> ope;
		if (ope == 1)
		{
			cout << "Informe o codigo da cidade: \n";
			cin >> codci;
			contaci++;
			cout << "Informe o numero de veiculos de passeios na cidade em 1999: ";
			cin >> qtdveiculo;
			contaVe = contaVe + qtdveiculo;
			cout << "Informe o numero de acidentes com vitimas: ";
			int qtdaci = 0;
			cin >> qtdaci;

			if (qtdaci > maiorAci)
			{
				maiorAci = qtdaci;
				codCidMaior = codci;
				cout << "CodCidade MAIOR Acidente: " << codCidMaior << " com " << maiorAci << " acidentes" << endl;
			}

			if (qtdaci < menorAci)
			{
				menorAci = qtdaci;
				codCidMenor = codci;
				cout << "CodCidade MENOR Acidente: " << codCidMenor << " com " << menorAci << " acidentes" << endl;
			}

			if (qtdaci <= 2000)
			{
				contaAci = contaAci + qtdaci;
				contaciM++;
			}
			cout << "O maior incide e: " << maiorAci << " pertencente a cidade de codigo " << codCidMaior << endl;
			cout << "O MENOR indice e: " << menorAci << " partencente a cidade de codigo " << codCidMenor << endl;
			cout << "A media de veiculos nas " << contaci << "e de: " << contaVe / contaci << endl;
			cout << "A media de acidentes das cidades com menos de 2000 veiculos e: " << contaAci / contaciM << endl;

		}
		else if (ope == 2)
			op = 0;


		
	} while (op == 1);





}
int main()
{
	cout << "Bem-Vindo:\n";
	RetornaMaiorMenor();

}


