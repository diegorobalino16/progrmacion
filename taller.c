/* Inclusión de archivos */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXIMO 1024

void encriptar(char cadena[MAXIMO],int numero); //funcion que encriptara el mensaje
void encriptar(char cadena[MAXIMO],int numero) //implementacion
{
   int i=0;
  // char letra;

   while (cadena[i]!= '\0')
   {
      cadena[i]=cadena[i]+numero;
      i++;
   }
   printf("\nMensaje cifrado:%s\n",cadena);

}



/* Función principal */

int main ()
{

   int llave;
   char cadena[MAXIMO] = {0};

   // Impresión por pantalla y salida del programa
   printf("cifrado ciclico\n");
   printf("Ingrese el mensaje a cifrar:");
   scanf("%1024[^\n]",cadena);

   printf("Ingrese la llave numerica:");
   scanf("%d",&llave);
   encriptar(cadena, llave);
   getchar();
//printf("%s", llave);
   //printf("%s", cadena);





   return 0;

}
