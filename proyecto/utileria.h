/*
  Nombre: utileria.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: Noviemrbe del 2022
  Descripcion: Este archivo contiene el codigo de utileria.h
* 
* Este archivo contiene todas las funciones de utileria, tales como menu,
*/

//---------------------------------------------------------------------------
// SECCION PARA LA DECLARACION DE FUNCIONES
void run();
int menu(int);
void start();
void print_tutorial();
void print_about();
int CapturaEntero(const char solicitud[]);
//void analizador_lexico(entradaS);

//---------------------------------------------------------------------------


#include <iostream>
#include <cstdlib>
#include <limits>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstring>
#include <iterator>
#include <sstream>
//#include <bits/stdc++.h>
//#include "analizador_lexico.h"

//#include "analizador_semantico.h"
//#include "interprete.h"

using namespace std;

//begin code

//Definiendo el rango de las opciones disponibles en el menu 
#define MINUSEROPTION 0
#define MAXSUEROPTION 3

// Definindo el tamaño maximo para la entrada 
#define MAXINPUT 51

//---------------------------------------------------------------------------
/* \fn int run
 * \brief Esta funcion se encarga de ejecutar todo el pro
 * \param no recibe parametros
 * \return no retorna valores
*/
void run() {

system("color 0a");

/* variable: userSelection
*  La variable user selection es el mecanismo por el cual se navegara entre las distintas opciones del menu.
*/
int userSelection;

//Secuencia de inicio

do{
userSelection = menu(userSelection);
switch(userSelection){

  case 0:
  exit(EXIT_SUCCESS);
  break;

  case 1:
  start();
  break;

  case 2: 
  print_tutorial();
  break;

  case 3:
  print_about();
  break;

 // case 885311:
  //all_range_mode();
  //break;
  

}// Llave de cierre en switch para userSelection

}while(userSelection != 0);

} // Llave de cierre en la funcion run

 //---------------------------------------------------------------------------

/** \fn void menu
 * \brief Esta funcion se encaraga de listar las funciones disponibles
 * \param  no recibe parametros
 * \return no retorna valores de salida
 */
 int menu(int){


	system("title LETREC en C++ - Menu");
  system("cls"); // limpiando pantalla 
  int n; // Varaible para uso local -> esta variable es de uso local; La finalidad de esta variable es un contenedor para retornar un valor aceptado. 
  cout << "A continuacion se muestran las opciones disponibles.\n" << endl;

  cout << "Iniciar ejecucion [1]" << endl;
  cout << "Tutorial [2]" << endl;
  cout << "Acerca de [3]" << endl;
  cout << "Salir [0]\n" << endl;
 
  //Asegurando el buen funcionamiento aceptando solo un valor numerico y este valor numerico debe estar disponible en las opciones 
  n = CapturaEntero("Seleccione una opcion valida: ");

  return n;
}// Llave de cierre en la funcion menu

//---------------------------------------------------------------------------
void start(){

/* variable: exe_mode
* La variable exe_mode es el mecanismo por el cual el usuario seleccionara un modo de ejecucion, en otras palabras esta variable se encarga de saber si el usuario
* dara una entrada manual o cargara un archivo del sistema de un directorio en especifico.
*/
int exe_mode; 


/* variable: entradaLinea
* La variable entradaLinea corresponde a la linea de caracteres que ese esta detectando
*/
string entradaLinea;
/* variable: entradaS
* La variable entradaS corresponde a la entrada del usuario como un string, para despues
* ser procesada para obtener flujo lienal de caracteres
*/
string entradaS;

/* variable: entradaC
* La variable entrada corresponde al flujo de caracteres recibidos manualmente o por un archivo 
*/
//char entradaC[MAXINPUT];


/* variable: tokens
* El vector tokens contiene cada uno de los elementos de el codigo leido por el sistema, este vector 
* se pasa al analizador lexico para su veficacion
*/
//char entradaC[MAXINPUT];
vector <string> tokens;

cout << "\nIngresar entrada manualmente[1]" << endl;
cout << "Cargar archivo[2]\n" << endl;

cout << "NOTAS.\a\n";
cout << "Se debe modificar el codigo que se desea probar directamente en archivo .txt." << endl;
cout << "No cambiar el nombre del archivo del directorio, el nombre por defecto debe ser: codigoletrec con extencion .txt\n" << endl;

exe_mode = CapturaEntero("Ingrese un modo de ejecucion: ");

//exe_mode == 1 ? cin >> entradaS : fileToString();
if(exe_mode == 1 ){
  
  cout << "Ingrese expresion: ";
  ws(cin);
  getline(cin, entradaS);
  
}else{
  cout << "Leyendo archivo, espere un momento...\n" << endl;

ifstream archivo("codigoletrec.txt");

while(getline(archivo, entradaLinea)){

entradaS = entradaS + entradaLinea + "\n";
} // Llave de cierre en while 

} // Llave de cierre en while 

cout << "Esta es la entrada detectada: \n" << endl;
cout << entradaS << endl;
cout << "\n" << endl;

  istringstream iss(entradaS);
    string s;
    while (iss >> s) {
        tokens.push_back(s);
    }

 for (const string &s: tokens) {

  cout << "Imprimiendo tokens detectados: " << endl;
  cout << s << endl;
    }
  system("pause");
}
//chuky begins 

//analizador_lexico(entradaS);
//analizador_semantico():
//analizador_semantico();

//---------------------------------------------------------------------------
/** \fn print_tutorial 
 * \brief Esta funcion tiene como objetivo de mostrar el uso del sistema.
 * \param no toma valores de entrada
 * \return no retorna valores
 *
 * Esta funcion desglosara la forma en la que se debe utilizar o bien mostrar
 * instrucciones precisas de la forma en la que se tiene que utilizar
 * este mismo contenido estara detallado en el manual de usuario del sistema
 */

 //---------------------------------------------------------------------------
void print_tutorial(){

system("title LETREC en C++ - Tutorial/Guia");

cout << "Bienvendo al tutorial!\n" << endl;

cout << "Ejecutando tutorial\n" << endl; 
system("start https://github.com/Zalcom53/Lenguajes-de-programacion-/blob/main/proyecto/Manual/Manual%20de%20usuario.pdf");

system("pause");


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

  
  system("cls");

  system("title LETREC en C++ - Acerca de");

  cout << "Acerca de...\n" << endl;
  
  cout << "Este software es parte de una proyecto finial para la materia de Lenguajes de programacion,\n";
  cout << "este software contiene un analizador lexico, sintactico y un interprete del lenguaje LETREC.\n" << endl;

  cout << "Universidad de Sonora - Licenciatura en ciencias de la computacion.\n" << endl;

  cout << "Autor: Daniel Antonio Quhuis Hernandez\n" << endl;

  cout << "Hermosillo, Sonora, Mexico - Noviembre del 2022\n" << endl;

  system("pause");


} // Llave de cierre en la funcion print_about

//---------------------------------------------------------------------------

/** \fn  CapturaEntero
 * \brief realiza la captura de un entero de forma segura(se asegura que el dato capturado sea un numero entero y no una letra u otro caracter no permitido)
 * \param una cadena de caracteres
 * \return retorna un entero como un valor aceptado
*/
int CapturaEntero(const char solicitud[]){

  // Para cada uno de los casos se lanza una alerta en forma de sonido para alertar al usuario de algun error en el flujo de entrada

  int n; // Variable de uso local

     while(true){
         cout << solicitud;
        cin >> n;
         if(cin.bad()){
            cout << "Ocurrio un error irrecuperable en el flujo de entrada\a" << endl;
            exit(EXIT_FAILURE);
             return 1;
         } // Llave de cierre en cin.bad

         if(cin.fail()){
            cout << "Error: no es un numero, \nintroduzca de nuevo...\a" << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
             continue;
        } // Llave de cierre en cin.fail 

        if(n < MINUSEROPTION || n > MAXSUEROPTION){

          //Asegurando que el usuario de una entrada dentro del rango que ese esperaria 
          do{
          cout << "Error: seleccion fuera de rango\a\n" << endl;
          n = CapturaEntero("Seleccione una opcion valida: : ");
          }while( n < MINUSEROPTION || n > MAXSUEROPTION);

        } // Llave de cierre en if para el rango 

       return n;
     }
 }//Llave de cierre en la funcion CapturaEntero


//------------------------------------------------------------------------
