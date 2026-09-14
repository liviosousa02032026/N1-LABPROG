#include<stdio.h>
int main(){
	unsigned char x, maior=0, menor=255, intensidade;
	unsigned int n;
	float xnorm;
	puts("Entre com a quantidade n de pixels:");
	scanf("%d", &n);
	puts("Entre com o pixel x que sera normalizado - valores de 0 a 255: ");
	scanf("%hhu", &intensidade);
	for(unsigned int i = 1; i <= n; ++i){
		printf("Entre com a intensidade x%d entre 0 e 255:", i);
		scanf("%hhu", &x);
		if ( x > maior ){
			maior = x;
		}
		if ( x < menor ){
			menor = x;
		}	
	}
	xnorm = (float)(intensidade - menor)/(maior - menor);
	printf("O valor de %hhu normalizado = %f\n", intensidade, xnorm);
	return 0;
}