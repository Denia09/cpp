#include<iostream>
#include <stdlib.h>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>

extern void agregar_cliente();
extern void listado_clientes();
extern void buscar_cliente();
extern void modificar();
extern void eliminar();

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
void dibujarCuadro(int x1,int y1,int x2,int y2){
	int i;
	
    for (i=x1;i<x2;i++){
		gotoxy(i,y1); cout << "\304"; //linea horizontal superior
		gotoxy(i,y2); cout << "\304"; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); cout <<"\263"; //linea vertical izquierda
		gotoxy(x2,i); cout <<"\263"; //linea vertical derecha
	}
	
    gotoxy(x1,y1); cout<< "\332"; 
    gotoxy(x1,y2); cout<< "\300";
    gotoxy(x2,y1); cout<< "\277";
    gotoxy(x2,y2); cout<< "\331";
}


void menu(){
    int opc;
   
    
	system("cls");
    do{
    	 
    	 system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
		system("COLOR D0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
        gotoxy(28,2);cout<<"BIENVENIDO AL HOTEL DANEF"<<endl;
        dibujarCuadro(1,4,77,22);
        gotoxy(26,6); cout<<"1. AGREGAR NUEVO CLIENTE"<<endl;
        gotoxy(26,8); cout<<"2. VER LISTADO DE CLIENTES"<<endl;
        gotoxy(26,10); cout<<"3. BUSCAR CLIENTE POR ID"<<endl;
        gotoxy(26,12); cout<<"4. MODIFICAR DATOS DE CLIENTES"<<endl;
        gotoxy(26,14); cout<<"5. ELIMINAR CLIENTES"<<endl;
        gotoxy(26,16); cout<<"0. SALIR"<<endl;
        dibujarCuadro(18,19,60,21);
        gotoxy(26,20);cout<<"Seleccione una opcion: ";
        cin>>opc;
        switch(opc){
            case 1: agregar_cliente(); break;
            case 2: listado_clientes(); break;
            case 3: buscar_cliente(); break;
            case 4: modificar(); break;
            case 5: eliminar(); break;
            case 0: 
			{
				system("cls");
				dibujarCuadro(18,5,58,7);
				gotoxy(30,6);cout<<"SE CERRO LA SESION"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				break;
			}
            default: 
			system("cls");
			dibujarCuadro(18,5,58,7);
			gotoxy(30,6);cout<<"Opcion incorrecta"<<endl<<endl;
			gotoxy(20,8);system("pause");
			break;
        }
    }while(opc != 0);
}
