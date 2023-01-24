/*****************************************************************************************
 Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
 exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

 2. void m_identidade(int *mat, int ordem);
 Fun��o : preenche a matriz mat como matriz identidade (diagonal principal =1 e demais =0)
 Parametros :
 mat � ponteiro para a �rea de armazenamento da matriz quadrada.
 Ordem � tamanho da matriz (num linhas = num colunas)
 *****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>

 void m_identidade(int *mat, int ordem)
 {
     int i;

     for(i=0; i<(ordem*ordem); i++) // zera toda a matriz
            *(mat+i)=0;

     for(i=0; i<ordem; i++)        //percorre s� a diagonal principal, atribuindo 1 a esses valores
            *(mat+((ordem+1)*i))=1;
 }



 void main ()
 {
    int i;
    int matriz[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,
                     15,16,17,18,19,20,21,22,23,24,25};

    //declarando e apontando o ponteiro
    int *pmat = matriz;

    //exibindo a matriz sem altera��es
    printf("Matriz original: \n");

    for(i=0;i<25;i++)
    {
        if(i%5==0)
          printf("\n");

        printf("%2d ",*(pmat+i));
    }


    //chamando a fun��o
    m_identidade(pmat,5);

    //exibindo a matriz j� modificada
    printf("\n\nMatriz modificada:  \n");

    for(i=0;i<25;i++)
    {
        if(i%5==0)
          printf("\n");

        printf("%d ",*(pmat+i));
    }


    printf("\n\n");
    system("pause");
 }
