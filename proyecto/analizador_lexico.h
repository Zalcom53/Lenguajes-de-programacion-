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

#define LENGTH_RES 12


// palabras reservadas
char const *palabrasReservadas[LENGTH_RES] = {"zero?", "if", "then", "else", "let", "proc", "letrec"};
//terminales


/** \fn void analizadr lexico 
 * \brief Esta funcion se encaraga de listar las funciones disponibles
 * \param  no recibe parametros
 * \return no retorna valores de salida
 */
void analizador_lexico(){ 


system("title LETREC en C++ - Analizador lexico");

/* vector: tokensgroup
 * El vector tokensgroup es el contenedor donde se alojara los tokens que se
 * generan partiendo de la cadena de caracteres.
 * Este vector tendra un tamaño n donde n es el numero de tokens generados de la expresion
 * el analizador lexico generara los tokens para dicha expresion 
 * */

//vector tokensgroup = {|};

cout << "Leyendo flujo de caracteres, espere un momento...\n" << endl;
//cout << "Flujo de caracteres detectado: " << charFlux << "\n" << endl;
cout << "Generando tokens, espere un momento...\n" << endl;

//Analizando la cadena y agrupanndo por tokens la cadena de caracteres 

system("pause");

}
 // Llave de cierre en la funcion analizador_lexico

 //void validarTokens(vector <char> tokens){

//cout << "Validando tokens, espere un momento...\n" << endl;

//Comparamos cada uno de los elemntos que estan en el vector para aseguranos que los elementos que contenga sean validos en la gramatica



// } // Llave de cierre en validar token 
