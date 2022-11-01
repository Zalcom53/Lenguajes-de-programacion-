
//---------------------------------------------------------------------------
/*v \fn void run
 * \brief Esta funcion se encarga de ejecutar todo el pro
 * \param no recibe parametros
 * \return no retorna valores de salida
*/
void run() {


menu();

} // Llave de cierre en la funcion run

 //---------------------------------------------------------------------------

/** \fn void menu
 * \brief Esta funcion se encaraga de listar las funciones disponibles
 * \param no recibe parametros
 * \return no retorna valores de salida
 */
void menu(){

  cout << "A continuacion se muestran las opciones disponibles.\n" endl;
  userSelection = capturaSegura("Seleccione una opcion valida: ");

  start();
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

cout << "Bienvendo al tutorial!\n" << endl;

cout << "Esta es una guia rapida de como utilizar este programa\n" << endl;
cout << "A continuacion selecciona una opcion para iniciar el tutorial o ver el manual completo en el repositorio de github\n" << endl;

system("start https://github.com/Zalcom53/Lenguajes-de-programacion-");

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
