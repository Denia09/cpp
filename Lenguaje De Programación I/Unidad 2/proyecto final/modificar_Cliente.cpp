#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>
extern void gotoxy(int x,int y);
extern void dibujarCuadro(int x1,int y1,int x2,int y2);

void modificar(){
	system("cls");
    system("mode con: cols=82 lines=28"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA 
	system("COLOR D0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
	dibujarCuadro(0,0,81,27); //SE DIBUJA EL CUADRO PRINCIPAL
	dibujarCuadro(1,1,80,3); //SE DIBUJA EL CUADRO DEL TITULO
	
    ifstream archivo("registro.csv", ios::in);
    if(!archivo){
        cout<<"Error al abrir el archivo"<<endl<<endl;
    }else{
        vector<string> all_registros;
        string registro;
        string num_id, nombre, apellido, cedula,tipo_habitacion, metodo_pago;
        string numid_buscar;
        dibujarCuadro(18,4,68,6);
        gotoxy(30,2);cout<<"MODIFICAR DATOS DE CLIENTES"<<endl;
        gotoxy(24,5);cout<<"Ingrese el ID del cliente para buscarlo: ";
        cin>>numid_buscar;
        bool existe = false, modifico = false;
        int opc = 0;

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
                dibujarCuadro(18,7,68,9);
                gotoxy(35,8);cout<<"CLIENTE ENCONTRADO"<<endl;
                gotoxy(35,10); cout<<"Numero de ID = "<<num_id<<endl;
                gotoxy(32,12); cout<<"1. Nombre = "<<nombre<<endl;
                gotoxy(32,14);cout<<"2. Apellido = "<<apellido<<endl;
                gotoxy(32,16);cout<<"3. Cedula = "<<cedula<<endl;
                gotoxy(32,18);cout<<"4. Tipo de habitacion = "<<tipo_habitacion<<endl;
                gotoxy(32,20);cout<<"5. Metodo de pago = "<<metodo_pago<<endl;
                gotoxy(32,22);cout<<"0. Ninguno"<<endl;
                do{
                    gotoxy(18,24);cout<<"Que campo desea modificar?: ";
                    cin>>opc;
                }while(opc < 0 || opc > 5);

                fflush(stdin);
                switch(opc){
                    case 1: modifico = true;
                            gotoxy(18,25);cout<<"Ingrese el nuevo Nombre: ";
                            getline(cin, nombre);
                            break;
                    case 2: modifico = true;
                            gotoxy(18,25);cout<<"Ingrese el nuevo Apellido: ";
                            getline(cin, apellido);
                            break;
                    case 3: modifico = true;
                            gotoxy(18,25);cout<<"Ingrese la nueva cedula: ";
                            getline(cin, cedula);
                            break;
                    case 4: modifico = true;
                    		gotoxy(18,25);cout<<"Ingrese la nueva habitacion: ";
                    		getline(cin,tipo_habitacion);
                    case 5: modifico = true;
                            gotoxy(18,25);cout<<"Ingrese el nuevo metodo de pago: ";
                            getline(cin, metodo_pago);
                            break;
                }
                all_registros.push_back(num_id + ";" + nombre + ";" + apellido + ";" + cedula + ";" + tipo_habitacion + ";" + metodo_pago );
            }else all_registros.push_back(registro);
        }//fin del while
        archivo.close();
        if(existe){//if(existe == true)
            if(modifico){
                ofstream nuevo("registro.csv");
                for(int i = 0; i < int(all_registros.size()); i++){
                    nuevo<<all_registros[i]<<endl;
                }
                nuevo.close();
                system("cls");
                dibujarCuadro(18,5,68,7);
                gotoxy(30,6);cout<<"DATOS MODIFICADOS EXITOSAMENTE"<<endl<<endl;
                gotoxy(26,10);system("pause");
            }
        }else{
        	system("cls");
        	dibujarCuadro(18,5,68,7);
            gotoxy(24,6);cout<<"El cliente no se encuentra en el registro "<<endl;
            gotoxy(26,10);system("pause");
        }
    }
}

