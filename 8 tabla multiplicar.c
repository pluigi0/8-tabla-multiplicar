#include <stdio.h>

int main ()
{
	int numero;
	int i;
	int s=1;
	
	while(s=1){
		
		printf ("\n\t PROGRAMA TE MUESTRA LA TABLA DE MULTIPLICAR DE UN NUMERO ENTERO POSITIVO\n ");
		printf ("\n\t Ingrese un numero: \n");
		scanf("%d", &numero);
		
		
		if (numero >= 1){
		
		for (i=1; i<=12; i++)
		{
			printf("%d * %d = %d\n", numero, i, numero * i);
		}
		
		}
		
		else{
		printf("\n\t Escribe un numero entero positivo, que no sea cero porfa y gracias.\n");
		}
	}

    
	return 0;
}
