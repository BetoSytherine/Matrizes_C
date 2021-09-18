#include <stdio.h>
#include <stdlib.h>

//Estudo sobre Matrizes em linguagem C

int main()
{
    int matrizes[2][2],i,j; // como não foram definidos os valores da matriz foi preciso criar novas variaveis ( i e j)




    printf("\n---------------------Valores---------------------\n");

    for (i = 0; i < 2; i++) // o primeiro "for" foi para definir as colunas, ja o segundo as linhs
        for(j = 0; j <2; j++)
    {
        printf("Insira os valores [%d][%d]:", i, j);
        scanf("%d", &matrizes[i][j]); //inserindo o valor, ele será registrado na variavél "matrizes", que esta registrando os numeros em "i" e "j"
    }





    printf("\n---------------------Saida:---------------------\n"); //definindo a saida



    for(int i = 0; i < 2; i++)//primeiro "for" esta lendo as colunas, ja o segundo esta lendo as linhas
        for(int j = 0; j < 2; j++)
    {
        printf("valores representantes de [%d] [%d] = %d\n", i, j, matrizes[i][j]);// "[%d] [%d}" esta mostrando coluna x linhas
        //  o ultimo "%d, matrizes[i][j]" esta dizendo que sera mostrado a matriz com os valores digitados
    }


    return 0;
}
