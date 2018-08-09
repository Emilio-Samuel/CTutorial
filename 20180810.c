#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char ** argv){
   
   int i= 1, j=0,max=0, current;
   char* palabra=NULL;

   /*Para cada argumento exceptuando el propio programa 
   (porque argv[0] es ./nombredelprog) vemos cuantas c's tiene*/
   for(;i<argc;i++){
      current=0;
      j = 0;
      for(;j<strlen(argv[i]);j++){
         if(argv[i][j]=='c'){
            current++;
         }
      }
      /*Caso en el cual la palabra analizada tiene mas c's que el maximo actual*/
      if(max<current){
         /*Si existe la palabra*/
         if(palabra) {
            /*Liberamos espacio*/
            free(palabra);
            max= current;
            /*Lo reasignamos*/
            palabra= (char*)malloc(sizeof(char)*strlen(argv[i])+1);
            /*Guardamos la palabra analizada*/
            strcpy(palabra,argv[i]);
         }
         /*Si no existe la palabra*/
         else{
            max= current;
            /*Reservamos el tamaño de la palabra*/
            palabra= (char*)malloc(sizeof(char)*strlen(argv[i])+1);
            /*Guardamos la palabra*/
            strcpy(palabra,argv[i]);
         }
      }
   }
   printf("%s", palabra);
   return 0;
}