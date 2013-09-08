#include <string.h>
#include <stdio.h>

int Verificar(char * Num1, char * Num2){
	int cont=0;
	int tamaño=0;
	tamaño=strlen(Num1);
	int boolean=0;
	while(cont <= tamaño-1)
	{
		if (Num1[cont]==Num2[cont]){
			boolean=1;
			printf("%i", boolean);
			cont++;}
		else
		{
			printf("%i \n",0);
			return 0;}
		
	}
	printf("%i \n", boolean);
	
	
	}
	
void main(){
	char num1 []="Cinthya";
	char num2[]="Cinthya";
	int num=Verificar(num1,num2);	
	}
