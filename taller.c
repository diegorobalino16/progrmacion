/* Inclusión de archivos */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXIMO 1024
#define ESPACIO 32
#define MAXMAY 90
#define MINMAY 65
#define LETRAS 26

//SE CONSIDERA QUE EL USUARIO NO IGRESARA LETRAS MINUSCULAS (LO DIJO EN LA ULTIMA CLASE).



void encriptar(char cadena[MAXIMO],int numero); //funcion que encriptara el mensaje
void encriptar(char cadena[MAXIMO],int numero) //implementacion
{
   int i=0;

   while (cadena[i]!= '\0')
   {
         if (cadena[i] == ESPACIO)
             {
              cadena [i]=cadena[i]-numero;
             }
         cadena[i]=cadena[i]+numero;


         if ((cadena [i] <= MAXMAY && cadena[i] >= MINMAY) || cadena[i] == ESPACIO) //VALIDA DESBORDAMIENTO DE MAYUSCULAS Y ESPACIO
         {

         cadena[i]=cadena[i];
         }
         else
         {
         cadena[i]=cadena[i]-LETRAS;
         cadena[i]=cadena[i];
         }
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
   printf("Ingrese el mensaje a cifrar(en mayusculas):");
   scanf("%1024[^\n]",cadena);


   printf("Ingrese la llave numerica:");
   scanf("%d",&llave);
   encriptar(cadena, llave);
   getchar();

   return 0;

}


