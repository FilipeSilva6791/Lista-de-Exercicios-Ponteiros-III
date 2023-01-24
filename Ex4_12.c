/****************************************************************************************
 Implemente a fun��o descrita nas quest�es a seguir, seguindo as especifica��es. No mesmo
 exerc�cio, construa a fun��o main() que utilize ou teste a fun��o desenvolvida.

 4. void m_ordena_linha(int *dados, int lin, int col);
 Fun��o : Ordena em ordem crescente os valores de cada linha da matriz dados
 Cada linha deve ser ordenada independente das demais.
 Parametros :
 dados � ponteiro para vetor a ser ordenado
 lin, col � numero de linhas e colunas de dados
 DICA : Utilize um algoritmo de ordena��o conhecido, como o bubble sort ou o quick-sort
 ****************************************************************************************/

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 #define LIN 5
 #define COL 7

 //! para ordena��o foi usado o algoritmo BUBBLE SORT

 void m_ordena (int *dados, int lin, int col)
 {
    int i,j,k=0, troca, flag;

    for(j=0; j<lin; j++) //repete a ordena��o para cada linha
    {
       flag=1;

       while(flag==1)
       {
           flag=0;  //se o programa n�o cair em nenhum IF, a linha est� ordenada, portanto pode sair do la�o

           for(i=k; i<(k+col);i++) //s� percorre uma linha por vez (la�o controlado pelos valores que K assume)
           {
              if((*(dados+i)) > (*(dados+i+1)) && (i+1)<(k+col)) //compara o valor atual da matriz com o pr�ximo e checa +
              {                                                   //+ se n�o esta comparando com a proxima linha (k+col) -> proxima linha
                flag=1;

                //troca os valor atual pelo pr�ximo
                troca = *(dados+i);
                *(dados+i) = *(dados+i+1);
                *(dados+i+1)=troca;
              } //end if
           } //end for
        } //end while 2

       k+=col;
    } // end for
 }  // end fun��o


 int main ()
 {
     int i;
     int matriz[LIN][COL];

     //declarando e apontando os ponteiros
     int *p_mat = matriz;

     //preenchendo a matriz com valores aleat�rios e exibindo-a
     srand(time(NULL)); //semente = tempo do computador

     printf("Matriz prenchida com valores aleatorios: \n");

     for(i=0; i<(LIN*COL); i++)
     {
        *(p_mat+i) = rand() % 100;

        if(i%COL==0)
            printf("\n");

        printf("%2d ",*(p_mat+i));
     }

     //Chamando a fun��o
     m_ordena(p_mat,LIN,COL);

     //Exibindo a matriz ordenada
     printf("\n\nMatriz ordenada por linha: \n");

      for(i=0; i<(LIN*COL); i++)
     {
        if(i%COL==0)
            printf("\n");

        printf("%2d ",*(p_mat+i));
     }

     //finalizando o programa
     printf("\n\n");
     system("pause");
     return 0;
 }
