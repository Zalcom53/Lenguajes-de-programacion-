/*
  Nombre: analizador_semantico.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: Noviemrbe del 2022
  Descripcion: Este archivo contiene el codigo del analziador semantico
*/


  // Definindo expresiones de la sintaxis concreta
  struct e1{
  //number
    int number;
  //----------------------
  }e_type1;

  struct e2{
  //-(Expression,Expression)
    int number1, number2;

  }e_type2;

//----------------------
   struct e3{
  //zero?()
  
  

  }e_type3;
//----------------------
   struct e4{
  //if Expression then Expression else Expression 
  

  }e_type4;
//----------------------
   struct e5{
  //Identifier
  

  }e_type5;
//----------------------
   struct e6{
  //let (Identifier) = Expression in Expression
  

  }e_type6;
  //----------------------
   struct e7{
    //proc(Identifier) Expression  
  

  }e_type7;
//----------------------

   struct e8{
  //(Expression Expresssion)
  

  }e_type8;
//----------------------

struct e9{
  
  //letrec Identifier(identifier) = Expression in Expression

  }e_type9;
//----------------------

#include "analizador_lexico.h"

/** \fn  analizador_sintactico
 * \brief Esta funcion recibe un string, este string es la entrada del usuario, ya sea escrita directamente o desde un archivo-
 * Una vez tomado el string generara tokens para pasar a una fase de validacion
 * donde el validador tiene como objetivo validar cada uno de los tokens aceptados
 * \param una cadena de caracteres
 * \return retorna un vector con tokens aceptados y propios de a gramatica
*/
void analizador_sintactico(){

system("title LETREC en C++ - Analizador semantico");

cout << "Recibiendo grupo de tokens, espere un momento...\n" << endl;

//comparar el pimer elemento del vector con cada una de las coas
// por ejemplo comparar con palabras reservadas y si noe stan con los simbolos
// y ya deplano ver si es un numero o un idenficador
// y si no arrojar el error de que no es una entrada valida
// pasar lo que se encunetre a  un template y que arme una expresion para retornarla al interprete 

//Mandamos a pantalla los tokens que se recibieron y su tipo 
   printf("\t\tEXPRESION: %s\n",entrada);
   imprimirTokenReservadas();
   imprimirTokenSimbolos();
   imprimirTokenIdentificadores();
   imprimirTokenNumeros();
   imprimirIdentificadoresNoValidos();
   getch();

//Set values for any expresion

switch(token_key){

case 1:
e_type1.number = 
break;

case 2:
e_type2.number1 =;
e_type2.number2 =;
break;

case 3:

break;

case 4:
break;

case 5:
break;

case 6:
break;

case 7:
break;

case 8: 
break;

case 9:
break;
}

} // Llave de cierre en la fucion analizador_semantico



  


//Inicio del desarrollo de los metodos para imprimir los resultados.
void imprimirTokenSimbolos(){
	puts("\n\n----------------\n|TOKENS SIMBOLOS|\n----------------");
	for(int i=0;i<strlen(tokenSimbolos);i++){printf("%c\n",tokenSimbolos[i]);}
}

void imprimirTokenReservadas(){
	puts("\n-----------------------\n|TOKENS Reservadas|\n-----------------------");
	for(int i=0;i<auxTR;i++){printf("%d %s\n",i+1,tokenReservadas[i]);}
}

void imprimirTokenIdentificadores(){
	puts("\n-----------------------\n|TOKENS IDENTIFICADORES|\n-----------------------");
	for(int i=0;i<auxTI;i++){printf("%d %s\n",i+1,tokenIdentificadores[i]);}
}

void imprimirTokenNumeros(){
	puts("\n-----------------------\n|TOKENS NUMEROS|\n-----------------------");
	for(int i=0;i<auxTN;i++){printf("%d %s\n",i+1,tokenNumeros[i]);}
}

void imprimirIdentificadoresNoValidos(){
	puts(" ");
	printf("********************************* MENSAJES *********************************\n");
   if(auxTNV == 0){
   	printf("\t\t 0 Errores, programa fuente exitoso...");
   }else{
   	for(int i=0;i<auxTNV;i++)
	   {
   		printf("\t\tERROR: No es Valido el Token: %s \n",tokensNoValidos[i]);
   	}
   }
}