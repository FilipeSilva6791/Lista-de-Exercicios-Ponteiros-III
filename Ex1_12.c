/******************************************************************************************
 Implemente a função descrita nas questões a seguir, seguindo as especificações. No mesmo
 exercício, construa a função main() que utilize ou teste a função desenvolvida.

 1. void m_escala(int *mat, int k, int lin, int col);
 Função : Multiplica a matriz mat pelo escalar k. Armazena na própria matriz
 Parametros :
 mat – ponteiro para matriz origem
 k – valor escalar multiplicando de mat
 lin,col – numero de linhas e colunas da matriz mat
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

    //exibindo a matriz sem alterações
    printf("Matriz original: \n");

    for(i=0;i<25;i++)
      printf("%d ",*(pmatriz+i));   //! em uma matriz as posições de memória em que os valores são alocados estão em sequência

    //chamando a função
    k=5; //! (aleatorio)
    m_escala(pmatriz,k,5,5);

    //exibindo a matriz já alteradas
    printf("\n\nMatriz modificada: (multiplicador = %d) \n",k);

    for(i=0;i<25;i++)
      printf("%d ",*(pmatriz+i));

    printf("\n\n");
    system("pause");
 }

