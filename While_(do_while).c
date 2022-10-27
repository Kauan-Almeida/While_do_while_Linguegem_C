#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//**Estrutura de repeticao While em C
	
	//**Ex 1 while
	
	int cont = 1;
	float n1, n2, n3, m;
	
	while (cont <= 4){
		
		printf("# %d \n", cont);
		printf("Digite 3 notas \n");
		scanf("%f%f%f", &n1, &n2, &n3);
		m = (n1 + n2 + n3) / 3;
		printf("Media: %.2f \n\n", m);
			
		cont = cont + 1;
	}
	
	//**Ex 2 while
	
	int num, soma;
	soma = 0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	while(num >= 0){
	
	soma = soma + num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
}
	printf("Somatorio: %d\n", soma);	
	
	//**Estrutura de repaticao do...while em c
	
	//**Ex 1 do...while
	
	float p, s;
	s = 0;
	
	do{
		printf ("Preco: ");
		scanf("%f", &p);
		s = s + p;
	}
	while(p != 0);
		printf("Total: %.2f\n", s);
	
	//**Ex 2 do...while
	
	int x, r, cont1;
	cont1 = 1;
	
	do{
		printf("Digite o valor de x: ");
		scanf("%d", &x);
		r = x * 3;
		printf("R: %d \n", r);
		cont1 = cont1 + 1; 
	}
	while (cont1 <= 5 );
	system("PAUSE");
		
		
	
	}
