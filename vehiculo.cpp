#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Vehiculo{
	private:
		string placa;
		string color;
		string marca;
		int velocimetro;
	public:
		Vehiculo(string, string, string, int);
		void mostrarDatos();
		void cambiarVelocidad(int);
};

Vehiculo::Vehiculo(string pla, string col, string mar, int vel){
	placa = pla;
	color = col;
	marca = mar;
	velocimetro = vel;
}

void Vehiculo::mostrarDatos(){
	cout<<"\nMOSTRAR DATOS"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"placa: "<<placa<<endl;
	cout<<"su color es: "<<color<<endl;
	cout<<"marca: "<<marca<<endl;
	cout<<"el velocimetro indica: "<<velocimetro<<endl;
	
}

void Vehiculo::cambiarVelocidad(int nVelocidad){
	velocimetro=nVelocidad;
}


/*class Automovil----------------------------------------------------------------------------------------------------------------------------------*/
class Automovil : public Vehiculo{
	private: 
		int cantPuertas;
		int cantPasajeros;
	public:
		Automovil(string, string, string, int, int, int);
		void mostrarAutomovil();
		void subirPasajeros(int);
		void bajarPasajeros(int);
};
Automovil::Automovil(string pla, string col, string mar, int vel, int cPuer, int cPasaj) : Vehiculo(pla,col,mar,vel){
	cantPuertas = cPuer;
	cantPasajeros = cPasaj;
}

void Automovil::mostrarAutomovil(){
	mostrarDatos();
	cout<<"La cantidad de puertas es: "<<cantPuertas<<endl;
	cout<<"La cantidad de pasajeros es: "<<cantPasajeros<<endl;
}

void Automovil::subirPasajeros(int cantidad){
	cantPasajeros+=cantidad;
}

void Automovil::bajarPasajeros(int cantidad){
	if(cantPasajeros>=cantidad){
		cantPasajeros-=cantidad;
	} else{
		cout<<"no hay suficientes pasajeros para bajar"<<endl;
	}
}
/*class camion----------------------------------------------------------------------------------------------------------------------------------*/
class Camion : public Vehiculo{
	private:
		int carga;
	public:
		Camion(string, string, string, int, int);
		void mostrarCamion();
		void cambiarCarga(int);
};

Camion::Camion(string pla, string col, string mar, int vel, int car) : Vehiculo(pla,col,mar,vel){
	carga = car;
}

void Camion::mostrarCamion(){
	mostrarDatos();
	cout<<"el camion esta cargando: "<<carga<<endl;
}

void Camion::cambiarCarga(int nCarga){
	carga=nCarga;
}

int main(){
	string placa,color,marca;
	int velocimetro;
	int cantPuertas, cantPasajeros;
	cout<<"\t\tAUTOMOVIL\t"<<endl;
	cout<<"INGRESE PLACA: "; cin>>placa;
	cout<<"INGRESE COLOR: "; cin>>color;
	cout<<"INGRESE MARCA: "; cin>>marca;
	cout<<"INGRESE VELOCIMENTRO: "; cin>>velocimetro;
	cout<<"INGRESE CANT. PUERTAS: "; cin>>cantPuertas;
	cout<<"INGRESE CANT. PASAJEROS: "; cin>>cantPasajeros;
	Automovil au1(placa,color,marca,velocimetro,cantPuertas,cantPasajeros);
	au1.mostrarDatos(); 
	int subirPasajeros;
	int bajarPasajeros;
	cout<<"INGRESE CUANTOS PASAJEROS SUBIRAN: "; cin>>subirPasajeros;
	au1.subirPasajeros(subirPasajeros);
	au1.mostrarAutomovil();
	cout<<"INGRESE CANTIDAD DE PASAJEROS A BAJAR: "; cin>>bajarPasajeros;
	au1.bajarPasajeros(bajarPasajeros);
	au1.mostrarAutomovil();
	int carga;
	cout<<"\n\t\tCARGA"<<endl;
	cout<<"INGRESE PLACA: "; cin>>placa;
	cout<<"INGRESE COLOR: "; cin>>color;
	cout<<"INGRESE MARCA: "; cin>>marca;
	cout<<"INGRESE VELOCIMENTRO: "; cin>>velocimetro;
	cout<<"INGRESE CARGA EN TONELADAS: "; cin>>carga;
	Camion ca1(placa, color, marca, velocimetro, carga);
	ca1.mostrarCamion();
	int nCarga;
	cout<<"INGRESE NUEVA CARGA: "; cin>>nCarga;
	ca1.cambiarCarga(nCarga);
	ca1.mostrarCamion();
	
	return 0;
}
