#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>
extern void gotoxy(int x,int y);
extern void dibujarCuadro(int x1,int y1,int x2,int y2);


void eliminar(){
	system("cls");
    system("mode con: cols=82 lines=28"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
	system("COLOR D0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
	dibujarCuadro(0,0,81,27); //SE DIBUJA EL CUADRO PRINCIPAL
	dibujarCuadro(1,1,80,3); //SE DIBUJA EL CUADRO DEL TITULO
    ifstream archivo("registro.csv", ios::in);
    if(!archivo){
        cout<<"Error al abrir el archivo"<<endl<<endl;
    }else{
        vector<string> registros_no_eliminar;
        string registro;
        string num_id, nombre, apellido, cedula, tipo_habitacion, metodo_pago;
        string numid_buscar;
        gotoxy(35,2);cout<<"ELIMINAR CLIENTE"<<endl;
        gotoxy(25,4);cout<<"Ingrese el numero de ID a eliminar: ";
        cin>>numid_buscar;
        bool existe = false;

        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, nombre, ';');
            getline(token, apellido, ';');
            getline(token, cedula, ';');
            getline(token, metodo_pago, ';');
            getline(token, tipo_habitacion, ';');

            if(numid_buscar.compare(num_id) == 0) existe = true;
            else registros_no_eliminar.push_back(registro);
        }//fin del while

        archivo.close();

        if(existe){//if(existe == true)
            ofstream nuevo("registro.csv");
            for(int i = 0; i < int(registros_no_eliminar.size()); i++){
                 nuevo<<registros_no_eliminar[i]<<endl;
            }
            
            nuevo.close();
            
            system("cls");
            dibujarCuadro(18,5,65,7);
            gotoxy(33,6);cout<<"CLIENTE ELIMINADO"<<endl<<endl;
            gotoxy(26,10);system("pause");
         
        }else{
        	 system("cls");
        	 dibujarCuadro(18,5,68,7);
            gotoxy(28,6);cout<<"El cliente no existe en el registro"<<endl;
            gotoxy(26,10); system("pause");
        }
    }
}
