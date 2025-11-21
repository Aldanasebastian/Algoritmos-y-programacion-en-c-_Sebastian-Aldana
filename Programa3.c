//Sebastian Aldana
//PROGRAMA 3
// uso_funcion_printf
//17/10/25
//__________________________________________________________________

#include <stdio.h>
int main()   {
   short enteroNumero1= 115;
   signed int  enteroNumero2 = 55;
   unsigned long enteroNumero3 = 789;
   char caracterA= 65 ;
   char caracterB= 'B' ;
   float puntoFlotanteNumero1 = 89.8;
   double  puntoFlotantenumero2= 238.2236;

 printf("La variable entera tiene valor: %i \n", enteroNumero1);
 printf("La variable flotante tiene valor: %f \n",puntoFlotanteNumero1);
 printf("La variable doble tiene valor: %f \n", puntoFlotantenumero2);
 printf("La variable caracter tiene valor: %c \n", caracterA );
 printf("Entero como octal: %o \n Como Hexadecimal %X \n", enteroNumero1, enteroNumero2);
 printf("Flotante con precisión: %5.2f \n",puntoFlotanteNumero1);
 printf("Doble con precisión: %5.2f \n",puntoFlotantenumero2);
 printf("Carácter como entero: %d \n",caracterB);

return 0;

}
