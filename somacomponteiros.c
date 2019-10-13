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
   printf("Endereço de a %p\n",&a);
   printf("Endereço de pa %p\n",pa);
   
   if(*pa>*pb){
   		printf("A é maior que B");
   }else printf("B é maior que A");;
   return 0; 
}

