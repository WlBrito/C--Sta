#include <iostream>
#include "matriz.h"

using namespace std;

#pragma region EX03
void Ex03(int lin, int col)
{
    // verifica pelas linhas
    for (int i = 1; i <= lin; i++)
    {
        int encontraMaior = 0;
        int encontraMenor = 9999999;
        for (int j = 0; j < col - 1; j++)
        {
            if (matriz[i][j] > encontraMaior)
                encontraMaior = matriz[i][j];
            if (matriz[i][j] < encontraMenor)
                encontraMenor = matriz[i][j];
        }
        cout << "MAIOR: " << encontraMaior << endl;
        cout << "MENOR: " << encontraMenor << endl;
    }
    // verifica pelas colunas
    for (int i = 1; i <= col - 1; i++)
    {
        int encontraMaior = 0;
        int encontraMenor = 9999999;
        for (int j = 0; j < lin; j++)
        {
            if (matriz[i][j] > encontraMaior)
                encontraMaior = matriz[i][j];
            if (matriz[i][j] < encontraMenor)
                encontraMenor = matriz[i][j];
        }
        cout << "MAIOR: " << encontraMaior << endl;
        cout << "MENOR: " << encontraMenor << endl;
    }
}
#pragma endregion

#pragma region EX04
// Implemente uma sub-rotina que encontre o segundo maior elemento considerando somente a
// diagonal principal e a diagonal secundária de uma matriz.

void Ex04(int lin, int col)
{
    int maiorElemento = 0;
    int segundoMaiorElemento = 0;
    int menorElemento = 99999;
    int segundoMenorElemento = 99999;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            if (i = j)
            {
                if (matriz[i][j] > maiorElemento)
                    maiorElemento = matriz[i][j];
            }
    for (int i = 0; i < lin; i++)
        for (int j = 99; j > col; j--)
        {
            if (matriz[i][j] > maiorElemento)
                maiorElemento = matriz[i][j];
        }
    cout << "MAIOR: " << maiorElemento << endl;
    cout << "MENOR: " << menorElemento << endl;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            if (i = j)
            {
                if (matriz[i][j] > maiorElemento && segundoMaiorElemento < maiorElemento)
                    segundoMaiorElemento = matriz[i][j];
            }
            cout << "SEGUNDO MAIOR ELEMENTO: " << segundoMaiorElemento;
}
#pragma endregion

int main()
{
    int **m;
    int lin = 100;
    int col = 100;
    // Ex03(lin, col);
    Ex04(lin, col);
    return 0;
}
