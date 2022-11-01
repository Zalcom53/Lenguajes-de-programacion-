/*
  Nombre: interprete.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: Noviemrbe del 2022
  Descripcion: este archivo contiene el codigo fuente del interprete para LETREC
*/

#include <iostream>
#include <cstdlib>

using namespace std;


/** \fn void menu
 * \brief Esta funcion se encaraga de listar las funciones disponibles
 * \param no recibe parametros
 * \return no retorna valores de salida
 */
void menu(){



  print_tutorial();
  print_about();
}


//---------------------------------------------------------------------------
/** \fn print_tutorial
 * \brief Esta funcion tiene como objetivo de mostrar el uso del sistema.
 * \param No toma valores de entrada
 * \return no retorna valores
 *
 * Esta funcion desglosara la forma en la que se debe utilizar o bien mostrar
 * instrucciones precisas de la forma en la que se tiene que utilizar
 * este mismo contenido estara detallado en el manual de usuario del sistema
 */

 //---------------------------------------------------------------------------
void print_tutorial(){


}// LLave de cierre en la funcion print_tutorial


//---------------------------------------------------------------------------
/** \fn print_about
 * \brief Esta funcion tiene como objetivo de mostrar el uso del sistema.
 * \param No toma valores de entrada
 * \return no retorna valores
 *
 * Esta funcion desglosara la forma en la que se debe utilizar o bien mostrar
 * instrucciones precisas de la forma en la que se tiene que utilizar
 * este mismo contenido estara detallado en el manual de usuario del sistema
 */

void print_about() {

  cout << "Acerca de...\n" << endl;

  cout << "Autor: Daniel Antonio Quhuis Hernandez\n" << endl;




} // Llave de cierre en la funcion print_about

//---------------------------------------------------------------------------
