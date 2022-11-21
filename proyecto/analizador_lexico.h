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

 
%{
#include <iostream>
#include <cstdlib.h>
#include <vector>
#include <stdio.h>
#include <string.h>
FILE *yyin;
  
%}
using namespace std;

// tokens


//Operadores logicos y aritmeticos

// Palabras reservaas
{ZERO?}  {printf("\nPalabra reservada ZERO?: (%s)", yytext;}
{IF}     {printf("\nPalabra reservada IF: (%s)", yytext;}
{THEN}   {printf("\nPalabra reservada THEN: (%s)", yytext;}
{ELSE}   {printf("\nPalabra reservada ELSE: (%s)", yytext;}
{LET}    {printf("\nPalabra reservada LET: (%s)", yytext;}
{IN}     {printf("\nPalabra reservada IN: (%s)", yytext;}
{PROC}   {printf("\nPalabra reservada PROC: (%s)", yytext;}
{LETREC} {printf("\nPalabra reservada LETREC: (%s)", yytext;}

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
