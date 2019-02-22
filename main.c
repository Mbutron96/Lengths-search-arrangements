//
//  main.c
//  Practia02
//
//  Created by Miguel Ángel Butrón López on 2/11/19.
//  Copyright © 2019 Miguel Ángel Butrón López. All rights reserved.
//


#include<stdio.h>
#include<string.h>

const int TAM = 5;

//Declaración de funciones.
size_t calculaLong(char *palabra);
void tieneLetra(char *palabra, char x);

int main(void){
    
    
    size_t Longitud_total = 0;
    size_t tama_palabra[TAM];
    
    char *UNAM[]={"Universidad","Nacional", "Autónoma", "de", "México"};
    for(size_t i =0; i<TAM; i++){
        
        
        tama_palabra[i] = calculaLong(UNAM[i]);
        
        
        //Longitud_total = Longitud_total + tama_palabra[i];   Contador.
        Longitud_total+=tama_palabra[i];  //Otra forma de declarar el contador.
    }
    printf("\nLa longitud total del arreglo UNAM es de %zu caracteres.\n\n", Longitud_total);
    
    char letra = {'\0'};
    
    for(size_t i=0; i<TAM; i++){
        
        printf("Escriba la letra que desea buscar: ");  //Te pide la letra que quieres buscar en la palabra.
        scanf("%s",&letra);
        tieneLetra(UNAM[i], letra);
    }
    puts(""); // es una cadena de caracteres vacía "" -NO es nulo.
    return 0;
}

//Definición de funciones.
size_t calculaLong(char *palabra){         //Calcula la longitud del arreglo.
    
    size_t cantidad;
    cantidad = strlen(palabra);
    printf("La palabra \"%s\", tiene %zu letras.\n", palabra, cantidad);
    return cantidad;
};
void tieneLetra(char *palabra, char x){        //Me dice si tiene o no la letra que yo le pido en la línea 36.
    char *let;
    let=strchr(palabra, x);
    
    if(let==NULL){
        printf("La palabra \"%s\" NO tiene la letra %.1s.\n\n", palabra, &x);
    }
    else{
        printf("La palabra \"%s\" SI tiene la letra %.1s.\n\n", palabra, &x);
    }
};

