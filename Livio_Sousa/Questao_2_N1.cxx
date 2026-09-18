#include<stdio.h>
int main(){
	float y;
	unsigned int n, i, x1, x2, x3;
	puts("Quantas amostras do sinal serao usadas?(minimo de 3 amostras)");
	scanf("%u", &n);
	if(n >= 3){
		puts("Entre com x1 e x2");
		scanf("%u %u", &x1, &x2);
		for( i = 2; i <= (n - 1); ++i){
			printf("Entre com x%u:\n", i+1);
			scanf("%u", &x3);
			y = (float)(x1 + x2+ x3)/3;
			printf("Y%u = %.2f\n", i, y);
			x1 = x2;
			x2 = x3;
		}
	}else{
			puts("Voce deve digitar no minimo 3 amostras. Entre novamente com a quantidade de amostras");
	}
	return 0;
}
