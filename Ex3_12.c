/********************************************************************************************
 Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
 exercício, construa a função main() que utilize ou teste a função desenvolvida.

 3. int m_transposta (int *mat_t, int *mat,int lin, int col);
 Função : Gera a matriz transposta da matriz de entrada mat
 Parametros :
 mat_t – ponteiro para a área da matriz transposta
 mat – ponteiro para area da matriz de entrada/origem
 lin,col – numero de linhas e colunas da matriz origen
 Retorno : quantidade de valores copiados para p. 0 se ocorreu erro.

 OBS:
 Matriz transposta é a matriz que se obtém da troca de linhas por colunas de uma dada matriz.
 ********************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 #define LIN 6
 #define COL 5

 int m_transposta(int *mat_t, int *mat, int lin, int col)
 {
    int i,j;
    int copy=0;

    for(i=0; i<col; i++)
    {
        for(j=0; j<lin; j++)
        {
           *(mat_t+(i*lin)+j) =  *(mat+(j*col)+i);
           //mat_t percorre a memoria em ordem crescente

           //mat percorre todas as linhas de uma coluna, depois passa para outra coluna,
           //percorrendo todas as suas linhas e assim por diante...
           copy++;
        }
    }

     if(copy!=(lin*col))//qtd total de valores
        return 0;

     return copy;
 }


 void main ()
 {
   int i,copiados;
   int matriz[LIN][COL];
   int transposta[COL][LIN];

   //declarando e apontando os ponteiros
   int *pmatriz;
   int *ptransposta;

   pmatriz=matriz;
   ptransposta=transposta;

   //preenchendo a matriz com valores aleatórios
   srand(time(NULL));

   for(i=0; i<(LIN*COL);i++)
    *(pmatriz+i)=rand()%100;

   //exibindo a matriz original
   printf("Matriz preenchida com valores aleatorios: \n");

   for(i=0;i<(LIN*COL);i++)
    {
        if(i%COL==0)
          printf("\n");

        printf("%2d ",*(pmatriz+i));
    }

    //chamando a funcao
    copiados= m_transposta(ptransposta, pmatriz, LIN, COL);

    //exibindo a transposta
    if(copiados==0)
        printf("\n\nERRO.\n\n");
    else
    {
      printf("\n\nMatriz transposta: \n");

      for(i=0;i<(LIN*COL);i++)
      {
        if(i%LIN==0)
          printf("\n");

        printf("%2d ",*(ptransposta+i));
      }
    }

    printf("\n\n");
    system("pause");
 }
