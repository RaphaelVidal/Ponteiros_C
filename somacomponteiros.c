#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () { 
	setlocale(LC_ALL,"");   
   
   int a=5,b=4,result;
   int *pa,*pb,*pr;
   pa=&a;
   pb=&b;
   result=(*pa)+(*pb);
   pr=&result;
   
   
   printf("Resultado %d\n",*pr);
   printf("Endere�o de a %p\n",&a);
   printf("Endere�o de pa %p\n",pa);
   
   if(*pa>*pb){
   		printf("A � maior que B");
   }else printf("B � maior que A");;
   return 0; 
}

