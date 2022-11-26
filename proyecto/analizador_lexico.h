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


using namespace std;

#define LENGTH_RES 26


void imprimirTokens(vector<string> tokens);
tokens_group validarTokens();
void analizador_lexico(string entradaS);
void generarTokens(string entradaS);
bool verficarIdentificador();
bool verificarNumero();
bool verificarReservada();

/* vector: tokens
* El vector tokens contiene cada uno de los elementos de el codigo leido por el sistema, este vector 
* se pasa al analizador lexico para su veficacion
*/
vector<string> tokens;


/* struct: tokens
* Esta estructura corresponde a los
*/
struct tokens_group{

vector<int> number;
vector<string> id;
vector<string> reserved_keyword;

};

// palabras reservadas
char const *palabrasReservadas[LENGTH_RES] = {"zero?", "if", "then", "else", "let", "in", "proc", "letrec"};



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


system("pause");

}// Llave de cierre en la funcion analizador_lexico

//---------------------------------------------------------------------------

/** \fn  validarTokens
 * \brief Esta funcion tiene como objetivo validar los tokens generados, 
 * es decir comprobar que cada uno de los elementos en el vector contengan 
 * tokens aceptados por la gramatica 
 * \param una un vector
 * \return un struct que contiene los vectores con cada uno de los elementos validos
*/
tokens_group validarTokens(){

cout << "Validando tokens, espere un momento...\n" << endl;

//Comparamos cada uno de los elemntos que estan en el vector para aseguranos que los elementos que contenga sean validos en la gramatica

//Comprobamos cada uno de los componentes para ver a que tipo de tokens corresponde
verficarIdentificador();
verificarNumero();
verificarReservada();


return tokens_group;


 } // Llave de cierre en validar token 


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
    validarTokens();

 } // Llave de cierre en la funcion generar tokens
//---------------------------------------------------------------------------


/** \fn  verificarReservada 
 * \brief Esta funcion detecta si el elemento que se esta escaneando corresponde a
 * a una palabra reservada
 * \param una cadena de caracteres 
 * \return retorna un elemento al vector palabra reservada
*/
 bool verificarReservada(){



} // LLave de cierre en verificarReservada
//---------------------------------------------------------------------------

/** \fn  verificarNumero 
 * \brief Esta funcion detecta si el elemento que se esta escanenado corresponde
 * a un numero
 * \param una cadena de caracteres
 * \return retorna un elemtno al vector numero
*/
 bool verificarNumero(){




 }  // LLave de cierre en esNumer0
//---------------------------------------------------------------------------
/** \fn  verficarIdentificador
 * \brief Esta funcion detecta si el elemento que se esta escaneando corresponde
 * a un identificador y se almacena en en un vector de tipo identificador
 * \param una cadena de caracteres
 * \return retorna un elemento al vector identificador
*/
 bool verificarIdentificador(){



 }// Llave de cierre en esIdentificador

//---------------------------------------------------------------------------

