#include <stdio.h>

int num, i;

void binario();

int main(){
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("\nO numero em binario eh ");
	binario(num);
}

void binario(int num){
	while(num > 0){
		num = num / 2;
	}
}