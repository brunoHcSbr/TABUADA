//Calculadora de tabuadas usando os três laços de repetição

#include <stdio.h>
#include <locale.h>
#include <locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	int i,j,k,num,mult;
	int result01[10],result02[10],result03[10];
	
	printf("Digite um número para fazer a multiplicação: ");
	scanf("%d",&num);
	printf("\n----For----\n");
	for(i=0; i<10;i++){
		result01[i]=((i+1)*num);
	}
	for(i=0; i<10; i++){
		printf("\n%d x %d = %d\n",num,i+1,result01[i]);
	}
	printf("\n---While--- \n");
	j=0;
	while(j<10){
		result02[j]=((j+1)*num);
		j++;
	}
	j=0;
	while(j<10){
		printf("\n%d x %d = %d\n",num,j+1,result02[j]);
		j++;
	}
	printf("\n --- DO WHILE --- \n");
	k=0;
	do{
	  result03[k]=((k+1)*num);	
	k++;
	}while(k<10);
	
	k=0;
	do{
	  	printf("\n%d x %d = %d\n",num,k+1,result03[k]);
	k++;
	}while(k<10);
	
}

