#include<stdio.h>
#include<stdlib.h>


main() {

	int a=4, b=5;
	                
	if (a+2==6 && b!=5){
	   printf("Chile");
	}
	else if (a+3!=8 || b==16){
	   printf("Argentina\n");
	}
	else if (a==4 && b==5){
	   printf("Brasil");
	}
	else if (a!=3 || b==4+1){
	   printf("Colombia");
	}
	
	system("pause");
}
