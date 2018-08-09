#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
	/*Declaracion de variable*/
	char nombre[1000];
	/*Declaracion de variable inicializada*/
	char nombre1[10] = "Alejandro";
	/**
	Nunca puedo hacer 
	nombre=nombre1
	**/
	/*Puedo mover el n todo lo que quiera*/
	char *n;
	n=nombre;
	n=nombre1;

	/*strcpy(dst, ori)*/
	strcpy(nombre, nombre1);
	/*Para imprimir cadenas ponemos %s y la direccion de inicio de la cadena*/
	printf("%s\n", nombre);
	printf("%s\n", &nombre1[0]);
	int lon= strlen(nombre);
	int i=0;
	for(i; i<lon; i++){
		/*Para imprimir cada caracter ponemos %c y el nombre de la variable*/

		printf("%c\n", nombre[i]);

	}
	while(*n!=NULL){
		/*Para imprimir cada caracter ponemos %c y el nombre de la variable*/
		printf("%c\n", *n);
		n++;
	}




}
