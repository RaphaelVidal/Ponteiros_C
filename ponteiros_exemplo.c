#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int num=20;
	int *p;
	
	p=&num; // ponteiro recebe endere�o de num
	
	printf("Valor de num:%d",num); //valor de num
	printf("\nEndereco de num:%p",&num);//endere�o de num
	
	printf("\n\nEndereco de p:%p",&p);//endere�o de p
	printf("\nValor de p(ender de num):%p",p);//valor de p(endere�o de num)
	printf("\nValor de p(valor de num):%d",*p);//valor de num acessado por p
	return 0;
}
