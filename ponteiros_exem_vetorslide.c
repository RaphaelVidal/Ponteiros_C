#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () { 
	setlocale(LC_ALL,"");   
   int i;    
   int vetorTeste[3] = {4, 7, 1}; //valores do vetor
   int *ptr = vetorTeste; //declara ponteiro recebendo ende do vetor(primeiro endere�o)
   printf("endereco vetor: %p\n", vetorTeste); //imprime primeiro endere�o do vetor   
   printf("end apontado pelo ponteiro: %p\n", ptr);    
   printf("endereco ponteiro: %p\n", &ptr);     
   for (i = 0; i < 3; i++)    {       
      printf("Posi��o do vetor %d e valor %d e endere�o %p\n",i,ptr[i],&ptr[i]);         
   }    
   system("pause"); 
}

