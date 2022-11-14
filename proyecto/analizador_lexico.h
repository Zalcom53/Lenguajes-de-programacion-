/*
  Nombre: analizador_lexico.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: Noviemrbe del 2022
  Descripcion: Este archivo contiene el codigo del analziador lexico.
*
* Este codigo toma un flujo lineal de caracteres, analiza la entrada de caracteres
* ya sea una entrada manual o leyendo desde un archivo.
* Una vez analizada la o las entradas, este generara un grupo de tokens como valor de 
* retorno
*/

#include <iostream>
#include <cstdlib>

using namespace std;


#define MAX
//Definiendo palabras reservadas

char *palabrasReservadas[MAX] = {zero?, if,then, else, let, proc, letrec, in};
int *numeros[] = {1,2,3,4,5,6,7,8,9,0};


/* variable: char *exp
 * La variale exp toma el valor de la entrada recibida como parametro
 * el analizador lexico generara los tokens para dicha expresion 
 * */
char *exp; 

void analizador_lexico(){			0 

cout << "Analizador lexico\n" << endl;

cout << "Leyendo flujo de caracteres, espere un momento...\n << endl;

//Generando tokens partiendo de un flujo lineal de caracteres 

//Tomando un string 

//Creando retorno;

struct tokens{

	%token TNUM
	%token T

}// Llave de cierre en struct tokens


 // Llave de cierre en la funcion analizador_lexico
