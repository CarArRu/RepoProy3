/// Librerías
#include"Otro.h"



/// Variables
Uint VariableExterna;

/// Funciones

void StaticContador(void){
    static Uint Contador=0;

    Contador++;
    printf("\nValor del contador: %d", Contador);

    VariableExterna=23;

}   /// Función Static Contador


Uint FuncConReturn(void){
    static Uint Con=1;
    Con++;
    printf("\nLinea 22");
    if(Con>=2)
        return Con;
    printf("\nLinea 23");
    return Con;
}



LiberarMem(Uint **Direccion, Uint Tamanio){

    *Direccion = (Uint*)malloc(Tamanio*sizeof(Uint));
    if(*Direccion==NULL){
        printf("\nAsignacion de memoria incorrecta");}
    else{
        printf("\nAsignacion de memoria correcta");}


}
