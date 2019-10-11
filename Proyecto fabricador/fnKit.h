typedef struct
{
    char nombre[20];
    int legajo;
    float sueldo;
    int estado;

}persona;


/** \brief Realiza una operacion de factorial y devuelve el resultado
 * \param x e y son las variables de tipo entero que se utilizaran para operar.
 * \return El resultado de tipo entero del factorial de las variables ingresadas.
 */
int ffactorial(int x);

/** \brief Verifica el dato de una variable declarada en la funcion que la llama. Intentos configurables.
 * \param La variable donde se cargara el dato, el mensaje que se mostrara para ingresar el dato, mensaje en caso de error, el numero minimo, el numero maximo y la cantidad de intentos tolerables.
 * \return 1 En caso de superar la cantidad de reintentos (si los hay) y 0 en caso de que no haya habido errores.
 */
<<<<<<< HEAD
 /*
=======
>>>>>>> 79ce0e9979cc7e2c912b20510ea63da79243ff84
int getIntIntentos(int* input,char* msj,char* eMsj,int minimo,int maximo,int reintentos);
int getIntPlus(int*input,char*msj,char*eMsj,int minimo,int maximo);

void ordAs(int * nombreVector, int sizeVector);

void ordDes(int * nombreVector, int sizeVector);

int getRandom(int primerNumero, int ultimoNumero,int primeraVez);

void ordIncer(int vector[],int lenght);

int getChar(char * mensaje,char letraCorrecta);

void ordAsStructStr(persona pers[],int tam);

void lwrStruct(persona pers[],int tam);

void getFloat(float *input,char*msj,char*eMsj,float minimo,float maximo);

int getString(char str[],char*msj,char*eMsj,int limite,int intentos);
<<<<<<< HEAD
*/
=======
>>>>>>> 79ce0e9979cc7e2c912b20510ea63da79243ff84
