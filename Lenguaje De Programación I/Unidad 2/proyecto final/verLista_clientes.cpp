#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>
extern void gotoxy(int x,int y);
extern void dibujarCuadro(int x1,int y1,int x2,int y2);

void listado_clientes(){
	system("cls");
     system("mode con: cols=82 lines=28"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
	system("COLOR D0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
	dibujarCuadro(0,0,81,27); //SE DIBUJA EL CUADRO PRINCIPAL
	dibujarCuadro(1,1,80,3); //SE DIBUJA EL CUADRO DEL TITULO
    ifstream archivo("registro.csv", ios::in);
     
     gotoxy(28,2);cout<<"CLIENTES REGISTRADOS ACTUALMENTE"<<endl;
    if(!archivo){
        cout<<"Error al abrir el archivo"<<endl<<endl;
    }else{
        string registro;
        string num_id, nombre, apellido, cedula,tipo_habitacion, metodo_pago;
        while(getline(archivo, registro)){
           
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, nombre, ';');
            getline(token, apellido, ';');
            getline(token, cedula, ';');
             getline(token,tipo_habitacion,';');
            getline(token, metodo_pago, ';');
            
            cout<<endl;
			cout<<"   "<<num_id<<"       "<<nombre<<"       "<<apellido<<"        "<<cedula<<"        "<<tipo_habitacion<<"        "<<metodo_pago<<"       "<<endl;
           
        }
        archivo.close();
        cout<<endl;
        gotoxy(20,15);cout<<"Presione cualquier tecla para regresar al menu"<<endl;
        gotoxy(24,18);system("pause");
    }
}

