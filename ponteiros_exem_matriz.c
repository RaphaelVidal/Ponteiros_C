#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num[2][2];

	int *p;
	
	p=num;// equivalente a p=&num[0]      -- [0] primeiro endereço de nome	
		
	printf("\n\nEndereco de p:%p",&p);
	printf("\nValor de p(Primeiro ender de num):%p\n",p);
	
		for(int i=0;i<=1;i++){
			for(int j=0;j<=1;j++){	
				num[i][j]=i+10;
			};
		};
	
	printf("\nValor de p(valor de num):");
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			printf("\nPosição [%d][%d]: %d",i,j,*p++);
			printf("\n Endereco de num:%p\n",&num[i][j]);
		   };
		};

	return 0;
}
