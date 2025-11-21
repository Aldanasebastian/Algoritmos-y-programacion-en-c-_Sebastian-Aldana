//Sebastian Aldana
//21_10_25
//Programa 4
//___________________________________________________________



#include <stdio.h>
int main()
{
int enteroNumero;
char caracterA = 65; // Convierte el entero a carácter ASCII.
double puntoFlotanteNumero;
// Asignar valor de teclado a una variable.
printf("Escriba un valor entero: ");
scanf("%i", &enteroNumero);
printf("Escriba un valor real: ");
scanf("%lf", &puntoFlotanteNumero);
// Imprimir valores con formato.
printf("\nImprimiendo las variables \a\n");
printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);
printf("\t Valor de caracterA = %c \a\n", caracterA);
printf("\t Valor de puntoFlotanteNumero = %lf \a\n",
puntoFlotanteNumero);
printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
printf("\t Valor de puntoFlotanteNumero\n");
printf("en notación científica = %e\n", puntoFlotanteNumero);
return 0;

}
