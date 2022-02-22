#ifndef OTRO_H_INCLUDED
#define OTRO_H_INCLUDED

/// Librerías
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>


/// Definiciones macros
#define Mensaje printf("\n\nUso de macros\n\n");
#define MacroSuma(a, b, c) a+b+c;
#define Imprimir(Variable) printf("\n%d\n", Variable);
#define SumaDosNumeros(a, b) a+b



/// Definiciones de tipo
typedef unsigned int Uint;
typedef double Doble;
typedef unsigned char Uchar;



/// Estructuras
typedef struct{
    Uint i;
}StaticVars;

typedef enum{
    Op1,
    Op2,
    Op3,
    Op4,
    Op5
}NumeracionCase;

typedef struct{
    Uint a;
    Uint b;
    Doble c;
}CasteoDef;

typedef struct{
    Uint a;
    Doble b;
    void *ptr;
}PtrVoid;

typedef struct{
    Uint ConBrake;
    Uint ConContinue;
}ContinueBrakeStruct;

typedef struct{
    Uint Salida;
}ReturnStr;

typedef struct{
    Uint a;
    Uint b;
    Uint *ptr;
    Uint **ptrD;
}PunteroDobleStr;

typedef union{
    Uchar Nombre[50];
    Uchar Inicial;
    Uint ValorEntero;
}Uniones;

typedef struct{
    Uint *Direccion;
    Uint TamVector;
    Uint i;
    Uint *p;
}MemDinamicaStruct;

typedef struct{
    Uint Valor;
}DesplazamientoStruct;






/// Definiciones de variables
extern Uint VariableExterna;





/// Pototipos de funciones
extern void StaticContador(void);
extern Uint FuncConReturn(void);

extern LiberarMem(Uint **Direccion, Uint Tamanio);




#endif // OTRO_H_INCLUDED
