#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nome[10]="joão";

	char *p;
	
	p=nome;// equivalente a p=&nome[0]      -- [0] primeiro endereço de nome	
	
	
	printf("Nome:%s",nome);
	printf("\nEndereco de nome:%p",&nome);
	
	printf("\n\nEndereco de p:%p",&p);
	printf("\nValor de p(Primeiro ender de nome):%p",p);
	
	printf("\nValor de p(valor de nome):");
	for(int i=0;i<=10;i++){
		printf("%c",*p++);
		};

	return 0;
}
