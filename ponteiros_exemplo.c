#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int num=20;
	int *p;
	
	p=&num; // ponteiro recebe endereço de num
	
	printf("Valor de num:%d",num); //valor de num
	printf("\nEndereco de num:%p",&num);//endereço de num
	
	printf("\n\nEndereco de p:%p",&p);//endereço de p
	printf("\nValor de p(ender de num):%p",p);//valor de p(endereço de num)
	printf("\nValor de p(valor de num):%d",*p);//valor de num acessado por p
	return 0;
}
