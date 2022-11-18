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

/* variable: char *exp
 * La variale exp toma el valor de la entrada recibida como parametro
 * el analizador lexico generara los tokens para dicha expresion 
 * */


typedef enum {INTEGER, STRING, REAL} Type;
typedef struct{

Type type;
union{

  int integer;
  char *string;
  float real;

} x;
// Llave de cierre en union

} happy_mask_salesman;

happy_mask_salesman value_new_integer(int v){

Value v;
v.type = INTEGER;
v.x.integer = v;

return ;

} // Llave de cierre en happy_mask_salesman

void analizador_lexico(){ 

cout << "Analizador lexico\n" << endl;

cout << "Leyendo flujo de caracteres, espere un momento...\n << endl;

}
 // Llave de cierre en la funcion analizador_lexico
