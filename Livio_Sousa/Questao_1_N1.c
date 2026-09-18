#include<stdio.h>
int main(){
	unsigned char r, g, b, m, b2, b1, b0;
	puts("Entre com os valores de r, g e b:");
	scanf("%hhu %hhu %hhu", &r, &g, &b);
	puts("Entre com o valor de M");
	scanf("%hhu", &m);
	b2 = m>>2 & 1;
	b1 = m>>1 & 1;
	b0 = m & 1;
	r = r&254 | b2;
	g = g&254 | b1;
	b = b&254 | b0;
	printf("%hhu %hhu %hhu", r, g, b);
	return 0;
}	
	
