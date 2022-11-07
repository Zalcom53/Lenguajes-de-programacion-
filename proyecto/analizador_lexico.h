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

void analizador_lexico(){

cout << "Analizador lexico\n" << endl;

cout << "Leyendo flujo de caracteres, espere un momento...\n << endl;

//Generando tokens partiendo de un flujo lineal de caracteres 

//Tomando un string 

/* Esta variable el parametro de entrada
*/
Exp* string; 

//Creando retorno;

struct tokens{

	%token TNUM
	%token T

}// Llave de cierre en struct tokens


 // Llave de cierre en la funcion analizador_lexico
