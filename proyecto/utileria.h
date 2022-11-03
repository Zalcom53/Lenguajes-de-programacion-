
//---------------------------------------------------------------------------
/*v \fn void run
 * \brief Esta funcion se encarga de ejecutar todo el pro
 * \param no recibe parametros
 * \return no retorna valores de salida
*/
void run() {

//Secuencia de inicio
menu();

} // Llave de cierre en la funcion run

 //---------------------------------------------------------------------------

/** \fn void menu
 * \brief Esta funcion se encaraga de listar las funciones disponibles
 * \param  no recibe parametros
 * \return no retorna valores de salida
 */
void menu(){

  cout << "A continuacion se muestran las opciones disponibles.\n" endl;

  cout << "Iniciar ejecucion [1]" << endl;
  cout << "Tutorial [2]" << endl;
  cout << "Acerca de [3]" << endl;
  cout << "Salir [0]"
  
  //Asegurando el buen funcionamiento de la entrada para el menu
  userSelection = capturaSegura("Seleccione una opcion valida: ");

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
  
  }// Llave de cierre en switch menu

}// Llave de cierre en la funcion menu


//---------------------------------------------------------------------------
void start(){


cout << "Seleccione un modo de ejecucion\n" << endl;
cout << "Ingresar entrada manualmente[1]" << endl<
cout << "Cargar archivo" << endl;

int userMode = CapturaEntero("Seleccione un modo de ejecucion");

if(userMode = 1){

}


}// LLave de cierre en al funcion start


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

cout << "Bienvendo al tutorial!\n" << endl;

cout << "Esta es una guia rapida de como utilizar este programa\n" << endl;
cout << "A continuacion selecciona una opcion para iniciar el tutorial o ver el manual completo en el repositorio de github\n" << endl;

//system("start https://github.com/Zalcom53/Lenguajes-de-programacion-");

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

/** \fn  CapturaEntero
 * \brief realiza la captura de un entero de forma segura(se asegura que el dato capturado sea un numero entero y no una letra u otro caracter no permitido)
 * \param una cadena de caracteres
 * \return retorna un entero como un valor aceptado
*/
int CapturaEntero(const char solicitud[]){

   int n; // Variable de uso local

    while(true){
         cout << solicitud;
       cin >> n;

        if(cin.bad()){
            cout << "Ocurrio un error irrecuperable en el flujo de entrada" << endl;
             exit(EXIT_FAILURE);
           return 1;
        }
        if(cin.fail()){
           cout << "Error: no es un numero. Introduzca de nuevo..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
            continue;
       }


       return n;
    }
 }//Llave de cierre en la funcion CapturaEntero


//-------------------------------------------------------------------------------
