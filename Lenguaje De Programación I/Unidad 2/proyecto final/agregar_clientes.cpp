#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>

extern void menu();
extern void gotoxy(int x,int y);
extern void dibujarCuadro(int x1,int y1,int x2,int y2);
int getFrecuencia(string);
int getFrecuencia(string num_id_buscar){
	
    int cont = 0;
    ifstream archivo("registro.csv", ios::in);
    if(!archivo){
        cout<<"Error al abrir el archivo"<<endl<<endl;
    }else{
        string registro;
        string num_id, nombre, apellido, cedula, tipo_habitacion, habitacion_elegida,metodo_pago;

        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, nombre, ';');
            getline(token, apellido, ';');
            getline(token, cedula, ';');
            getline(token, tipo_habitacion, ';');
            getline(token, metodo_pago, ';');

            if(num_id_buscar.compare(num_id) == 0) cont++;
        }//fin del while
        archivo.close();
    }
    return cont;
}

void agregar_cliente(){
	system("cls");
	system("mode con: cols=82 lines=28"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA 
	system("COLOR D0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
	dibujarCuadro(0,0,81,27); //SE DIBUJA EL CUADRO PRINCIPAL
	dibujarCuadro(1,1,80,3); //SE DIBUJA EL CUADRO DEL TITULO
    ofstream archivo("registro.csv", ios::app);
    int volver = 1;
    
    while(volver == 1)
	{
	
    	if(!archivo){
        cout<<"Error al crear el archivo"<<endl;
    }else{
       string num_id;
        string nombre,apellido,cedula,tipo_habitacion,metodo_pago;
        int habitacion_elegida = 0;
        gotoxy(34,2);cout<<"AGREGAR CLIENTE"<<endl;
        cout<<endl;
        dibujarCuadro(1,4,80,26);
       dibujarCuadro(2,5,30,7);
        gotoxy(3,6);cout<<"Ingrese el numero de ID: ";
        cin>>num_id;
        if(getFrecuencia(string(num_id)) == 0){
            fflush(stdin);//limpiar el buffer de lectura
            dibujarCuadro(2,9,48,11);
            gotoxy(3,10);cout<<"Ingrese el Nombre del cliente: ";
            getline(cin, nombre);
            
            dibujarCuadro(2,13,48,15);
            gotoxy(3,14);cout<<"Ingrese el Apellido del cliente: ";
            getline(cin, apellido);
         
            dibujarCuadro(2,17,48,19);
            gotoxy(3,18);cout<<"Ingrese la cedula del cliente: ";
            getline(cin, cedula);
            
            dibujarCuadro(2,21,48,23);
            gotoxy(3,22);cout<<"Ingrese la forma de pago: ";
            getline(cin, metodo_pago);
       		dibujarCuadro(50,5,77,23);
            gotoxy(54,6);cout<<"Tipo de habitacion"<<endl;
            gotoxy(54,10);cout<<"1) Clasica"<<endl;
			gotoxy(54,14);cout<<"2) Especial"<<endl;
			gotoxy(54,18);cout<<"3) Premiun"<<endl;
			gotoxy(54,22);cout<<"4) VIP"<<endl;
            gotoxy(60,8);cout<<"Opcion: ";
            cin>>habitacion_elegida;
			switch( habitacion_elegida)
			{
				case 1: tipo_habitacion = "Clasica";break;
				case 2: tipo_habitacion = "Especial";break;
				case 3: tipo_habitacion = "Premiun";break;
				case 4: tipo_habitacion = "VIP";break;
			}
            archivo<<num_id<<";"<<nombre<<";"<<apellido<<";"<<cedula<<";"<<tipo_habitacion<<";"<<metodo_pago<<";"<<endl;
            archivo.close();
            system("cls");
             dibujarCuadro(18,5,68,7);
            gotoxy(30,6);cout<<"CLIENTE AGREGADO EXITOSAMENTE"<<endl;
            gotoxy(26,10);system("pause");
            
        }
		else
			{
			system("cls");
			dibujarCuadro(18,5,68,7);
			gotoxy(30,6);cout<<"El cliente ya esta registrado"<<endl;	
			gotoxy(26,10);system("pause");
			} 	
    }
	while(volver != 1)
		{
			system("cls");
			
			gotoxy(25,6);cout<<"El cliente ya esta registrado"<<endl<<endl;	
			gotoxy(20,7);cout<<"Para regresar al menu presione el numero 1: ";
    		cin>>volver;
		}
			system("cls");
		
			return menu();
		}		
	} 	

    	
    

