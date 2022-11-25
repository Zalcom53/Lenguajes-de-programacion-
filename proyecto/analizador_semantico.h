/*
  Nombre: analizador_semantico.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: Noviemrbe del 2022
  Descripcion: Este archivo contiene el codigo del analziador semantico
*/

#include "analizador_lexico.h"


// palabras reservadas
char const *palabrasReservadas[LENGTH_RES] = {"zero?", "if", "then", "else", "let", "proc", "letrec"};
char const *simbolos[LENGTH_RES] = {"-", "(", ")", ",", "="};

// Identifiacioes
// Numeros


void analizador_sintactico(){

system("title LETREC en C++ - Analizador semantico");

cout << "Recibiendo grupo de tokens, espere un momento...\n" << endl;

//comparar el pimer elemento del vector con cada una de las coas

// por ejemplo comparar con palabras reservadas y si noe stan con los simbolos

// y ya deplano ver si es un numero o un idenficador

// y si no arrojar el error de que no es una entrada valida

// pasar lo que se encunetre a  un template y que arme una expresion para retornarla al interprete 




} // Llave de cierre en la fucion analizador_semantico
