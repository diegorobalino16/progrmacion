/* Inclusión de archivos */
#include <stdio.h>
#include <stdlib.h>
#define TEXTO 100
/* Función principal */
int main (int argc,char **argv)
{
   char llave[3];
   char cadena[TEXTO] = {0};

   // Impresión por pantalla y salida del programa
   printf("cifrado ciclico\n");
   printf("Ingrese el mensaje a cifrar:");
   fgets(cadena,TEXTO,stdin);
   printf("Ingrese la llave numerica:");
   fgets(llave,3,stdin);
   printf("%s", llave);
   printf("%s", cadena);
   return 0;

}
