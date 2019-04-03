/** \brief Realiza una operacion de factorial y devuelve el resultado
 * \param x e y son las variables de tipo entero que se utilizaran para operar.
 * \return El resultado de tipo entero del factorial de las variables ingresadas.
 */
int ffactorial(int x);

/** \brief Verifica el dato de una variable declarada en la funcion que la llama. Intentos configurables.
 * \param La variable donde se cargara el dato, el mensaje que se mostrara para ingresar el dato, mensaje en caso de error, el numero minimo, el numero maximo y la cantidad de intentos tolerables.
 * \return 1 En caso de superar la cantidad de reintentos (si los hay) y 0 en caso de que no haya habido errores.
 */
int getIntIntentos(int* input,char* msj,char* eMsj,int minimo,int maximo,int reintentos);
int getInt(int*input,char*msj,char*eMsj,int minimo,int maximo);

void fnOrdAscendente(char * nombreVector, int sizeVector);

void fnOrdDescendente(int * nombreVector, int sizeVector);
