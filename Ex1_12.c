/******************************************************************************************
 Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
 exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

 1. void m_escala(int *mat, int k, int lin, int col);
 Fun��o : Multiplica a matriz mat pelo escalar k. Armazena na pr�pria matriz
 Parametros :
 mat � ponteiro para matriz origem
 k � valor escalar multiplicando de mat
 lin,col � numero de linhas e colunas da matriz mat
 ******************************************************************************************/


 #include<stdio.h>
 #include<stdlib.h>

 void m_escala (int *mat, int k, int lin, int col)
 {
     int i;

     for(i=0; i<(lin*col); i++)
        *(mat+i)*=k;
 }


 int main ()
 {

    int i;
    int k;

    int matriz[5][5] ={ 1, 2, 3, 4, 5,
                        6, 7, 8, 9,10,
                       11,12,13,14,15,
                       16,17,18,19,20,
                       21,22,23,24,25 };

    //declarando e apontando o ponteiro
    int *pmatriz;
    pmatriz= &matriz;

    //exibindo a matriz sem altera��es
    printf("Matriz original: \n");

    for(i=0;i<25;i++)
      printf("%d ",*(pmatriz+i));   //! em uma matriz as posi��es de mem�ria em que os valores s�o alocados est�o em sequ�ncia

    //chamando a fun��o
    k=5; //! (aleatorio)
    m_escala(pmatriz,k,5,5);

    //exibindo a matriz j� alteradas
    printf("\n\nMatriz modificada: (multiplicador = %d) \n",k);

    for(i=0;i<25;i++)
      printf("%d ",*(pmatriz+i));

    printf("\n\n");
    system("pause");
 }

