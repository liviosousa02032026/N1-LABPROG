#include<stdio.h>
int main(){
	unsigned int n;
	unsigned char x_int, min = 255, max = 0, x;
	float x_norm;
	puts("Quantos pixels tem a imagem?");
	scanf("%u", &n);
	for(unsigned int i = 1;  i<= n; ++i){
		printf("Entre com a intensidade x%u de 0 a 255:", i);
		scanf("%hhu", &x_int);
		if(x_int < min){
			min = x_int;
		}
		if(x_int > max){
			max = x_int;
		}
	}
	if (min == max){
		puts("As intensidades dos pixels sao todas iguais, nao sera possivel normalizar x.");
	}
	else{
		printf("Entre com a intensidade x entre %hhu e %hhu que sera normalizada:", min, max);
		scanf("%hhu", &x);
		x_norm = (float)(x - min)/(max - min);
		printf("O valor de %hhu normalizado = %.2f\n", x, x_norm);
	}
	return 0;
}
