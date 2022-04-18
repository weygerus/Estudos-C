#include<stdio.h>  // printf, scanf
#include<stdio.h>  // system("pause")
#include<locale.h> //setlocale

main(){
	double c, f;

	setLocale(LC_ALL "portuguese")
	printf("conversão de temperatura\n\n");

	printf("Digite a temperatura em graus celsius: ");
	scanf("%lf",&c)

	f = ((c * 9)/5) + 32;

	printf("A temperatura em fahrenheit é %.2lf", f);

	printf("%.2lfC° correspondem a %.2lf fahrenheit",c,f);

	printf("\n\n");
	system("pause");
}



#include<stdio.h>  // printf, scanf
#include<stdio.h>  // system("pause")
#include<locale.h> // setlocale


main() {
		int idade, nasc, anoAtual;

		setLocale(LC_ALL "portuguese");

		printf("Será que você pode tirar a carta parceiro??\n\n\");
		printf("fala essa data de nascimento aí: ");
		scanf("%d",&nasc);

		printf("ando meio perdido, em que ano estamos?: ");
		scanf("%d",&anoAtual);

		idade = anoAtual - nasc;

		if(idade>=18){
			printf("vai lá bonitão, se acaba");
		}else{
			printf("calma lá, ainda não");
		};

		printf("\n\n");
		system("pause");
}



#include<stdio.h>
#include<stdlib.h>

main(){
	double ra, senha;
	
	printf("Sistema de login\n\n");
	
	printf("Digite o RA: ");
	scanf("%lf",&ra);
	
	printf("Digite a SENHA: ");
	scanf("%lf",&senha);
	
	printf("\n\n");
	
	if (ra==123 && senha==456){
		printf("Bem vindo ao sistema!");		
	}else{
		printf("Dados incorretos!");	
	}
	
	printf("\n\n");
	
	system("pause");
}