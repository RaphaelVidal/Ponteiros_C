#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
int main(){
setlocale(LC_ALL,"");// conf de acentuação	
struct pessoa{    //declaração do registro
	int id;
	char nome[40];
	char tel[40];
};
char nome[40];
struct pessoa chefe,*p; //declaração da variavel e ponteiro
p=&chefe; // p recebe o endereço da variavel chefe
	printf("valor de p:%p",p); // imprime o primeiro endereço de chefe
	printf("\nEndereco de p:%p",&p);// imprime o endereço do ponteiro
	printf("\n\nDigite o ID do Chefe:");scanf("%d",&chefe.id);
		//
	printf("\nDigite o nome do Chefe:");
	scanf("%s",&nome); 
	strcpy(p->nome,nome); 
	//scanf("%s",&chefe.nome); //recebe a info do teclado
	printf("\nDigite o TEL do Chefe:");	scanf("%s",&chefe.tel);
	
	printf("\n\nid Chefe: %d",chefe.id);	printf("\nendereço: %p",&chefe.id);
	printf("\nNome Chefe: %s",chefe.nome);	printf("\nendereço: %p",&chefe.nome);// imprime valores e endereços
	printf("\nTel Chefe: %s",chefe.tel);	printf("\nendereço: %p",&chefe.tel);// do registro
	
	printf("\n\nvalor de p:%d",p->id);	    printf("\nendereço: %p",&p->id);
	printf("\n\nvalor de p:%s",p->nome);	printf("\nendereço: %p",&p->nome); // imprime valores e endereços
	printf("\n\nvalor de p:%s",p->tel);	    printf("\nendereço: %p",&p->tel);  // através do ponteiro
}
