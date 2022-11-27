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
#include <regex>
#include <vector>
using namespace std;

#define MAX 50


int main(){
string entradaS;
bool estado;
void validarToken(const string entradaS);
vector<string> tokens;
vector<string> tokensSintactico;
const regex identifier("[a-zA-Z0-9]+");
const regex number("(\\+|-)?[[:digit:]]+");
const regex reservadas("(?:zero|if|then|else|let|in|proc|letrec)");
const regex a_par("[(]");
const regex c_par("[)]");
const regex menos("[-]");
const regex coma("[,]");
const regex equals("[=]");

//while (true) {

cout << endl << "Ingrese el codigo como una sola liena, no dar enter: ";
getline(cin, entradaS);

stringstream check1(entradaS);
string intermediate;

// generando los tokens partiendo de la entrada
while(getline(check1, intermediate, ' ')){
      tokens.push_back(intermediate);
  } // Llave de cierre em while
//Imprimiendo los tokens
  for(int i = 0; i < tokens.size(); i++){
       // cout << tokens[i] << '\n';
} // Llave de cierre en for

cout << "\n" << endl;
// En este proceso vemos que tip corresponde los tokens

 for (int i = 0; i <= tokens.size(); i++) {

//verificamos para number
estado = regex_match(tokens[i], number);
if (estado == true) {
  cout << "token de tipo numero encontrado!" << endl;
  //tokensNumber[i] = stoi(tokens[i]);
tokensSintactico[i] = tokens[i];
}

tokensSintactico[i] = tokens[i];
//verificamos para menos
estado = regex_match(tokens[i], menos);
if (estado == true){
  cout << "operador menos encontrado!" << endl;
}


//verificamos para parentesis abierto
estado = regex_match(tokens[i], a_par);
if (estado == true){
  cout << "Parentesis abierto encontrado!" << endl;
}


//verificamos para coma
estado = regex_match(tokens[i], coma);
if (estado == true){
  cout << "coma encontrada!" << endl;
}


//verificamos para parentesis cerrado
estado = regex_match(tokens[i], c_par);
if (estado == true){
  cout << "Parentesis cerrado encontrado!" << endl;
}




//verificamos para palabras reservadas
estado = regex_match(tokens[i], reservadas);
if (estado == true){
  cout << "Palabras reservadas encontradas!" << endl;
}

estado = regex_match(tokens[i], identifier);
if (estado == true){
  cout << "Identificador encontrado!" << endl;
}



estado = regex_match(tokens[i], equals);
if(estado == true){
  cout << "equals encontrado!" << endl;
}


 }
 if(estado == false){
  cout << "Error: sintaxis mal formulada" << endl;
}

for(int i = 0; i < tokens.size(); i++){
      cout << tokensSintactico[i] << '\n';
} // Llave de cierre en for
system("pause");

return 0;

}
