#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
int main(){
setlocale(LC_ALL,"");// conf de acentua��o	
struct pessoa{    //declara��o do registro
	int id;
	char nome[40];
	char tel[40];
};
char nome[40];
struct pessoa chefe,*p; //declara��o da variavel e ponteiro
p=&chefe; // p recebe o endere�o da variavel chefe
	printf("valor de p:%p",p); // imprime o primeiro endere�o de chefe
	printf("\nEndereco de p:%p",&p);// imprime o endere�o do ponteiro
	printf("\n\nDigite o ID do Chefe:");scanf("%d",&chefe.id);
		//
	printf("\nDigite o nome do Chefe:");
	scanf("%s",&nome); 
	strcpy(p->nome,nome); 
	//scanf("%s",&chefe.nome); //recebe a info do teclado
	printf("\nDigite o TEL do Chefe:");	scanf("%s",&chefe.tel);
	
	printf("\n\nid Chefe: %d",chefe.id);	printf("\nendere�o: %p",&chefe.id);
	printf("\nNome Chefe: %s",chefe.nome);	printf("\nendere�o: %p",&chefe.nome);// imprime valores e endere�os
	printf("\nTel Chefe: %s",chefe.tel);	printf("\nendere�o: %p",&chefe.tel);// do registro
	
	printf("\n\nvalor de p:%d",p->id);	    printf("\nendere�o: %p",&p->id);
	printf("\n\nvalor de p:%s",p->nome);	printf("\nendere�o: %p",&p->nome); // imprime valores e endere�os
	printf("\n\nvalor de p:%s",p->tel);	    printf("\nendere�o: %p",&p->tel);  // atrav�s do ponteiro
}
