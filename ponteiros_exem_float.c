#include<stdio.h>
#include<stdlib.h>

int main(){
	float num=20;
	float *p;
	
	p=&num;
	
	printf("Valor de num:%.2f",num);
	printf("\nEndereco de num:%p",&num);
	
	printf("\n\nEndereco de p:%p",&p);
	printf("\nValor de p(ender de num):%p",p);
	printf("\nValor de p(valor de num):%.2f",*p);
	
	return 0;
}
