#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED

//aca van las estructuras y prototipos



typedef struct
{
    int id;
    char desc[31]; //Descripcion del sector
}eSector;
typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaNac;
    int idSector;
    int estado;
} empleado;
int menu();
void altaEmpleado(empleado emp[], int tam);
void bajaEmpleado(empleado emp[],int tam);
void modificarEmpleado(empleado emp[],int tam);
void ordenarEmpleados(empleado emp[],int tam);
void inicializarEmpleados(empleado emp[],int tam);
int buscarLegajo(empleado emp[],int tam,int legajo);
int buscarLibre(empleado emp[],int tam);
void mostrarEmpleado(empleado emp);
void mostrarEmpleados(empleado emp[],int tam);
void ordenarLegajos(empleado emp[],int tam);
void ordenarNombres(empleado emp[],int tam);
void ordenarSexos(empleado emp[],int tam);
void ordenarSueldos(empleado emp[],int tam);
void listarSector(eSector sector[],int tamSec, int idIngresado,empleado emp[],int tamEmp);
void listarSectores(eSector sector[],int tamSec,empleado emp[],int tamEmp);
#endif // employee_H_INCLUDED
