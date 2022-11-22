%{
##include <conio.h>
##include <stdlib.h>
#include <stdio.h>
#include <string.h>
FILE *yyin;
%}

//Tokens
DIGITO [0-9]
LETRA [a-zA-Z]
ESPACIO [" "]
GUIONES [-_]
CHAR_COMA [","]
CHAR_PUNTO ["."]
CHAR_DOSPUNTOS [":"]

IDENTIFICADOR {LETRA}({LETRA}|{DIGITO}|{GUIONES})*
CONST_INTEGER (-?[1-9][0-9]{0,4})|0
CONST_FLOAT {DIGITO}{0,8}{CHAR_PUNTO}{DIGITO}{1,8}

//Operadores logicos y aritmeticos


// Palabras reservaas
{ZERO?}  {printf("\nPalabra reservada ZERO?: (%s)", yytext;}
{IF}     {printf("\nPalabra reservada IF: (%s)", yytext;}
{THEN}   {printf("\nPalabra reservada THEN: (%s)", yytext;}
{ELSE}   {printf("\nPalabra reservada ELSE: (%s)", yytext;}
{LET}    {printf("\nPalabra reservada LET: (%s)", yytext;}
{IN}     {printf("\nPalabra reservada IN: (%s)", yytext;}
{LETREC} {printf("\nPalabra reservada LETREC: (%s)", yytext;}
{PROC}   {printf("\nPalabra reservada PROC: (%s)", yytext;}
