/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: JOHANN SEBASTIAN JOYA BELTRAN
 * 201711476
 *
 * Created on 5 de abril de 2020, 12:02 PM
 */

#include<iostream>
#include<stdio.h>
#include <stdlib.h>

using namespace std;

/*
 * Desarrollar un programa que mediante un menu de opciones y la implementacion de
funciones resuelva los siguientes algoritmos basicos
1 Haller el n-esimo termino de la serie de Fibonacci (usar recursividad)
2 Leer dos numeros y hallar el Maximo Comun Divisor entre los dos numeros
aplicando el algoritmo de Euclides recursivamente.
3 Leer dos numeros y visualizar si los numeros leeidos son o no amigos
4 Leer un numero e indicar si el numero leido es capicua
5 Programa que lea un ano e indique si se trata de un ano bisiesto o no
 */


//Implementacion de las funciones a utilizar.
int Seriefibonacci(int);
void CalcularFactorial(int);
void Capicuo(int);
int NumerosAmigos(int,int);
int AnoBisiesto(int);

int main(int argc, char** argv) { //FUNCION EN LA QUE SE EJECUTARA EL MENU CON DICHAS OPCIONES.
    
    //Inicializacion de las variables a utilizar.
    int option = 0;
    int numero = 0;
    int numberone = 0;
    int numbertwo = 0;
    int sumone = 0;
    int sumtwo = 0;
    
    //Declaracion del ciclo do while para asi ejecitar dicho menu.
    do{
    
        //Menu de opciones.
    cout<<"*****BIENEVENIDOS AL MENU DE OPCIONES*****"<<endl;
    cout<<"1. SERIE FIBONACCI..."<<endl; 
    cout<<"2. FACTORIAL DE UN NUMERO... "<<endl;
    cout<<"3. NUMERO CAPICUO..."<<endl;
    cout<<"4. NUMEROS AMIGOS..."<<endl;
    cout<<"5. ANO BISIESTO..."<<endl;
    cout<<"6. SALIR..."<<endl;
    cout<<"Digita una opcion..."<<endl;
    cin>>option;
    
    //Imprime la logica que se desea escoger
    switch(option){
        
        case 1:
            
            cout<<"Digite el numero de elementos";
            cin>>numero;
            
            cout<<Seriefibonacci(numero);
            break;
            
        case 2:
            
            cout<<"Digite numero para el calculo del factorial..."<<endl;
            cin>>numero;
            
            CalcularFactorial(numero);
            break;
            
        case 3:
            
            cout<<"Digite el numero"<<endl;
            cin>>numero;
            
            Capicuo(numero);
            break;
            
        case 4:
            
            cout<<"Digite un numero:"<<endl;
            cin>>numberone;
            cout<<"Digite otro numero:"<<endl;
            cin>>numbertwo;
            
            sumone = NumerosAmigos(numberone,sumone);
            sumtwo = NumerosAmigos(numbertwo,sumtwo);
            
            if (sumone == numbertwo && sumtwo == numberone) {

                cout<<"Los numeros son amigos"<<endl;
                
            }else{
                
                cout<<"Los numeros digitados no son amigos"<<endl;
            }
            break;
            
        case 5:
            
            cout<<"Digite el ano para verificar si es bisiesto...:"<<endl;
            cin>>numero;
            
            cout<<" *** "<<AnoBisiesto(numero);
            break;
    }
        
    }while(option < 6);
    
    cout<<"******GRACIAS POR PARTICIPAR...*****"<<endl;
}

//Funcion con un parametro que retorna un entero y le calcula la serie fibonnacci.
int Seriefibonacci(int n){
    int x = 0;
    int y = 1;
    int z = 1;
    for(int i = 0; i <= n; i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }
    return 0;
    
}

//Funcion de tipo void con un parametro en el cual le calcula el factorial.
void CalcularFactorial(int n){
    
    int factorial = 1;
    for(int i = 0; i <= n; i++) {
       
        factorial = factorial * i;
    }
}

//Funcion de tipo void con un parametro en el cual le calcula si es o no capicuo.
void Capicuo(int n){
    int a = 0;
    int b = 0;
    int c = 0;
    a = n;
    
    while(a != 0){
        
        b = a % 10;
        a = a / 10;
        c = c * 10 + b;
        
    }
    
    if(c == n){
        
        cout<<"NUMERO CAPICUO"<<endl;
    
    }else{
        
        cout<<"NUMERO NO ES CAPICUO..."<<endl;
    }
}

//Funcion que tiene dos parametros en el cual le retorna la suma de sus divisores.    
int NumerosAmigos(int x, int suma){
    for(int i = 2; i < x; i++){
        if (x % i == 0) {
            suma = suma + i;
        }
    }
    
    return suma;
}

//Funcion de tipo entera con un parametro en el cual le retorna si es o no año bisiesto.
int AnoBisiesto(int n){

    if(n % 4 == 0 and n % 100 != 0 or n % 400 == 0){
        cout<<"BISIESTO"<<endl;
    }else{
        cout<<"NO ES BISIESTO"<<endl;
    }
    return 0;
}