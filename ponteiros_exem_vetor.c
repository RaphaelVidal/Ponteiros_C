#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num[5]={3,5,7,9,11};
	int *p;
	p=num;// equivalente a p=&num[0]      -- [0] primeiro endere�o de nome	
	printf("\n\nEndereco de p:%p",&p);
	printf("\nValor de p(Primeiro ender de num):%p\n",p);
	
	//	for(int i=0;i<=5;i++){
	//	num[i]=i+10;
	//	};
	
	printf("\nValor de p(valor de num):");
	for(int i=0;i<=4;i++){
		printf("\nPosi��o %d: %d",i,*p++);
		printf("\n Endereco de num:%p\n",&num[i]);
		};

	return 0;
}
