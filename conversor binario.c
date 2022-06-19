#include <stdio.h>
#include <stdlib.h>

int num;

void binario();
void octal();
void hexa();

int main(){
	int op;
	
	do{
		system("cls");
		printf("Digite um numero: ");
		scanf(" %d", &num);
		
		printf("\n\\\\\\\\\\\\\\CONVERSOES\\\\\\\\\\\\\\");
		
		printf("\n\nDecimal:     %d", num);
		
		printf("\n\nBinario:     ");
		binario(num);
		
		printf("\n\nOctal:       ");
		octal(num);
		
		printf("\n\nHexadecimal: ");
		hexa(num);
		
		printf("\n\nDigite 1 para inserir outro numero ou qualquer caractere para encerrar o programa: ");
		scanf("%d", &op);
		
		if(op != 1){
			system("cls");
			printf("Obrigado por usar este programa =)");
			system("exit");
		}
	}while(op == 1);
}

void binario(int num){
	if(num != 0){
		binario(num/2);
		printf("%d", num%2);
	}
}

void octal(int num){
	if(num != 0){
		octal(num/8);
		printf("%d", num%8);
	}
}

void hexa(int num){
	char letra;
	
	if(num != 0){
		hexa(num/16);
		if(num%16 == 10){
			letra = 'A';
			printf("%c", letra);
		}
		else if(num%16 == 11){
			letra = 'B';
			printf("%c", letra);
		}
		else if(num%16 == 12){
			letra = 'C';
			printf("%c", letra);
		}
		else if(num%16 == 13){
			letra = 'D';
			printf("%c", letra);
		}
		else if(num%16 == 14){
			letra = 'E';
			printf("%c", letra);
		}
		else if(num%16 == 15){
			letra = 'F';
			printf("%c", letra);
		}
		else{
			printf("%d", num%16);
		}
	}
}