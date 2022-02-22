/// Librerías
#include "Otro.h"


/// Prototipos de Función


/// Constantes
const Uint ConstVar1=840;
const Uint ConstVar2=970;
const Uint *const ptrConst=&ConstVar1;




/// Variables
StaticVars StaticVar;
NumeracionCase OperacionesCase;
bool Condicion;


int main(void){

    printf("\nAportacion 1 de Master");
    goto PunterosDobles;
    printf("\nAportacion 2 de Master");
    goto ReturnFuncion;
    goto ContinueBrake1;
    goto ContinueBrake2;
    goto ContinueBrake3;
    goto ContinueBrake4;

    printf("\nStatic");
    for(StaticVar.i=0;StaticVar.i<5;StaticVar.i++)
        StaticContador();
    ///VariableExterna=123456;
    printf("\nValor de la variable externa es: %d", VariableExterna);

    /// Operaciones con Case
    OperacionesCase = Op3;
    Doble Gato=98.174;

    switch(OperacionesCase)/**Operaciones con case*/{

    case Op1:case Op3:
        printf("\nOperacion 1\nValor de la variable Doble: %0.3f", Gato);
        OperacionesCase=Op3;
        break;

    case Op2:
        printf("\nOperacion 2");
        OperacionesCase=Op1;
        break;


    case Op4:
        printf("\nOperacion 4");
        OperacionesCase=Op1;
        break;

    default:
        break;


    }   /// Switch para demostrar uso de Cases


    /// Constantes
///    ptrConst=&ConstVar2;

    printf("\nEl valor de la constantes es: %d", *ptrConst);



    /// Casteo
    printf("\nCasteo");
    CasteoDef Casteo;

    Casteo.a=894;
    Casteo.b=651;
    Casteo.c=Casteo.a/(Doble)Casteo.b;
    printf("\nEl valor de c es: %0.3f", Casteo.c);



    Mensaje
    Uint Suma=0, ParaSuma=80;
    Suma = MacroSuma(1, ParaSuma, 7);
    printf("\nEl valor de la suma es: %d\n", Suma);
    Imprimir(80)


    /// Casteo con punteros tipo void
    PtrVoid PunteroVoid;

    PunteroVoid.a=97;
    PunteroVoid.b=74.49;

    PunteroVoid.ptr = &PunteroVoid.a;
    printf("\nEl valor de la variable a es: %d", *(Uint*)PunteroVoid.ptr);
    PunteroVoid.ptr = &PunteroVoid.b;
    printf("\nEl valor de la variable b es: %0.2f", *(Doble*)PunteroVoid.ptr);


ContinueBrake:
    printf("\nContinue y brake\n");

    ContinueBrakeStruct ContinueBrake;

    ContinueBrake.ConBrake=0;
    printf("\nBrake\n");
    while(1){
        ContinueBrake.ConBrake++;
        if(ContinueBrake.ConBrake>=3)
            break;
        printf("\nContador: %d", ContinueBrake.ConBrake);


    }printf("\nBucle while terminado\n");

    for(ContinueBrake.ConBrake=0;ContinueBrake.ConBrake<5000;ContinueBrake.ConBrake++){

        if(ContinueBrake.ConBrake>=3)
            break;

        printf("\nContador del for: %d", ContinueBrake.ConBrake);

    }printf("\nBucle for terminado\n");

    /// continue
    printf("\ncontinue\n");
    ContinueBrake.ConContinue=0;
    do{

        ContinueBrake.ConContinue++;

        if(ContinueBrake.ConContinue==3)
            continue;

        printf("\nValor del contador: %d", ContinueBrake.ConContinue);

    }while(ContinueBrake.ConContinue<10);


ReturnFuncion:/**Etiqueta*/
    printf("\nReturn");
    ReturnStr Returni;
    Returni.Salida = FuncConReturn();
    printf("\nEl valor de la salida de la funcion es: %d", Returni.Salida);


    printf("\nVariable register");
    Uint register iteraciones;
    for(iteraciones=0;iteraciones<10;iteraciones++)
        printf("\nconteo %d", iteraciones);
    printf("\nCantidad de bytes de una variable tipo float: %d", sizeof(float));
    printf("\nCantidad de bytes de una variable tipo Entero largo: %d", sizeof(int long));
    printf("\nCantidad de bytes de una variable tipo caracter: %d", sizeof(char));


    Condicion = false;

    if(Condicion){
        printf("\nValor verdadero de la condicion");}
    else{printf("\nValor falso de la condicion");}

    printf("\n\nMacro");
    printf("\n\La suma es: %d", SumaDosNumeros(6, 4));


PunterosDobles:
    printf("\nPunteros Dobles\n");

    PunteroDobleStr PunteroDoble;

    PunteroDoble.a = 84;
    PunteroDoble.b = 140;

    PunteroDoble.ptr = &PunteroDoble.a;

    PunteroDoble.ptrD = &PunteroDoble.ptr;

    *PunteroDoble.ptrD = &PunteroDoble.b;

    printf("\nValor del puntero: %d", *PunteroDoble.ptr);

    printf("\n\nUnion");

    Uniones Union;

    for(ContinueBrake.ConBrake=0;ContinueBrake.ConBrake<50;ContinueBrake.ConBrake++)
        Union.Nombre[ContinueBrake.ConBrake]='\0';

    Union.Nombre[0] = 'C';
    Union.Nombre[1] = 'e';
    Union.Nombre[2] = 's';
    Union.Nombre[3] = 'a';
    Union.Nombre[4] = 'r';
    Union.Nombre[5] = ' ';
    Union.Nombre[6] = 'A';
    Union.Nombre[7] = 'r';
    Union.Nombre[8] = 'g';
    Union.Nombre[9] = 'u';
    Union.Nombre[10] = 'e';
    Union.Nombre[11] = 'l';
    Union.Nombre[12] = 'l';
    Union.Nombre[13] = 'o';



    printf("\nNombre completo: %s", Union.Nombre);
    printf("\nValor del caracter: %c", Union.Inicial);
    printf("\nValor del valor entero: %d", Union.ValorEntero);


    printf("\n\nMemoria Dinamica\n");

    MemDinamicaStruct MemDinamica;

    /**MemDinamica.TamVector=15;

    MemDinamica.Direccion = (Uint*)malloc(MemDinamica.TamVector*sizeof(Uint));
    if(MemDinamica.Direccion==NULL){
        printf("\nError en el asignamiento de memoria dinamica");}
    else{

        printf("\nSe asigno correctamente la memoria dinamica");
        for(MemDinamica.i=0;MemDinamica.i<MemDinamica.TamVector;MemDinamica.i++)
            MemDinamica.Direccion[MemDinamica.i]=MemDinamica.i+2;

        for(MemDinamica.i=0;MemDinamica.i<MemDinamica.TamVector;MemDinamica.i++)
            printf("\nValor %d: %d", MemDinamica.i, *(MemDinamica.Direccion + MemDinamica.i));

        free(MemDinamica.Direccion);

        for(MemDinamica.i=0;MemDinamica.i<MemDinamica.TamVector;MemDinamica.i++)
            printf("\nValor %d: %d", MemDinamica.i, *(MemDinamica.Direccion + MemDinamica.i));
    }*/

    MemDinamica.TamVector=4;
    LiberarMem(&MemDinamica.p, MemDinamica.TamVector);

    for(MemDinamica.i=0;MemDinamica.i<MemDinamica.TamVector;MemDinamica.i++)
        MemDinamica.p[MemDinamica.i]=(MemDinamica.i+1)*10;

    for(MemDinamica.i=0;MemDinamica.i<MemDinamica.TamVector;MemDinamica.i++)
        printf("\nValor %d: %d", MemDinamica.i, MemDinamica.p[MemDinamica.i]);

    free(MemDinamica.p);

    printf("\n\nDEZPLAZAMIENTO DE BITS\n\n");

    DesplazamientoStruct Desplazamiento;

    Desplazamiento.Valor = 84;
    printf("\nValor: %d", Desplazamiento.Valor);
    Desplazamiento.Valor = Desplazamiento.Valor << 8;
    printf("\nValor: %d", Desplazamiento.Valor);


}   /// Main


