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
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <regex>


using namespace std;

#define MAX 26


void imprimirTokens(vector<string> tokens);
void analizador_lexico(string entradaS);
void generarTokens(string entradaS);

void validarTokens(entradaS);


/* vector: tokens
* El vector tokens contiene cada uno de los elementos de el codigo leido por el sistema, este vector 
* se pasa al analizador lexico para su veficacion
*/
vector<string> tokens;


// palabras reservadas
char const *palabrasReservadas[MAX] = {"zero?", "if", "then", "else", "let", "in", "proc", "letrec"};
const regex NUMBER("[0-9]{4}"); // Expresion regular para identificar tokens 
const regex IDENTIFIER("[a-zA-Z]{25}");
//const regex MENOS("-");
//const regex O_PAR("(");
//const regex C_PAR(")");
//const regex COMA(",");

/** \fn void analizadr lexico 
 * \brief Esta funcion se encaraga de listar las funciones disponibles
 * \param  no recibe parametros
 * \return no retorna valores de salida
 */
void analizador_lexico(string entradaS){ 

system("title LETREC en C++ - Analizador lexico");

cout << "Esta es la entrada detectada: " << endl;
cout << entradaS << endl;
cout << "\n" << endl;

//Se generan los tokens partiendo del flujo lienal de caracteres 
generarTokens(entradaS);
imprimirTokens(tokens);

validarTokens(entradaS);

system("pause");

}// Llave de cierre en la funcion analizador_lexico

//---------------------------------------------------------------------------

/** \fn  imprimirTokens
 * \brief Esta funcio tiene como objetivo imprimir los los tokens que son aceptados 
 * \param una un vector
 * \return no tiene valores de retorno
*/
 void imprimirTokens(vector<string> tokens){


  cout << "Imprimiendo tokens neto detectados: " << endl;
 for (const string &s: tokens){

  cout << s;
  cout << " | ";
    }
    cout << endl;

 } // Llave de cierre en la funcion imprimir tokens

//---------------------------------------------------------------------------

/** \fn  generarTokens
 * \brief Esta funcion recibe un string, este string es la entrada del usuario, ya sea escrita directamente o desde un archivo-
 * Una vez tomado el string generara tokens para pasar a una fase de validacion
 * donde el validador tiene como objetivo validar cada uno de los tokens aceptados
 * \param una cadena de caracteres
 * \return retorna un vector con tokens aceptados y propios de a gramatica
*/
 void generarTokens(string entradaS){

  istringstream iss(entradaS); 
    string s;
    while (iss >> s) {
      tokens.push_back(s);
    }
    //validarTokens();

 } // Llave de cierre en la funcion generar tokens
//---------------------------------------------------------------------------
/** \fn  validarTokens
 * \brief Esta funcion tiene como objetivo validar los tokens generados, 
 * es decir comprobar que cada uno de los elementos en el vector contengan 
 * tokens aceptados por la gramatica 
 * \param una un vector
 * \return un struct que contiene los vectores con cada uno de los elementos validos
*/

  //---------------------------------------------------------------------------
void validarTokens(string entradaS){

bool estado;
for(int i = 0; i <= tokens.size(); i++){

  estado = regex_match(tokens[i], IDENTIFIER);
  if(estado == true){

    cout << "Token encontrado: ";
    cout << tokens[i] << endl;
  }else{
    cout << "no esta detectando el el identificador" << endl;
  } 
  } // Llave de cierre en for 


}
