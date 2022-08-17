#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>
extern void gotoxy(int x,int y);
extern void dibujarCuadro(int x1,int y1,int x2,int y2);

void buscar_cliente(){
	system("cls");
     system("mode con: cols=82 lines=28"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA 
		system("COLOR D0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,81,27); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,80,3); //SE DIBUJA EL CUADRO DEL TITULO
    ifstream archivo("registro.csv", ios::in);
    if(!archivo){
        cout<<"Error al abrir el archivo"<<endl<<endl;
    }else{
        string registro;
        string num_id, nombre, apellido, cedula, tipo_habitacion, metodo_pago;
        string numid_buscar;
        gotoxy(32,2);cout<<"BUSCAR CLIENTE POR ID"<<endl;
        gotoxy(26,4);cout<<"Ingrese el numero de ID a buscar: ";
        cin>>numid_buscar;
        bool existe = false;

        while(getline(archivo, registro)){
           
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, nombre, ';');
            getline(token, apellido, ';');
            getline(token, cedula, ';');
            getline(token,tipo_habitacion,';');
            getline(token, metodo_pago, ';');

            if(numid_buscar.compare(num_id) == 0){
                existe = true;
                dibujarCuadro(18,5,68,7);
                gotoxy(25,6);cout<<"EL CLIENTE FUE ENCONTRADO CON EXITO"<<endl;
                 cout<<endl;
             cout<<endl;
                cout<<"                  "<<num_id<<"    "<<nombre<<"    "<<apellido<<"    "<<cedula<<"    "<<tipo_habitacion<<"    "<<metodo_pago<<endl;
 				
				 gotoxy(21,16);cout<<"PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU"<<endl;
				 gotoxy(25,18);system("pause");           
			}
        }//fin del while
        archivo.close();
        if(!existe){//if(existe == false)
        system("cls");
         dibujarCuadro(18,5,68,7);
            gotoxy(25,6);cout<<"EL CLIENTE NO EXISTE EN EL REGISTRO"<<endl;
            gotoxy(20,8);cout<<"PRESIONE CUALQUIER TECLA PARA VOLVER AL MENU"<<endl;
            gotoxy(24,14);system("pause");
                  
        }
    }
}

