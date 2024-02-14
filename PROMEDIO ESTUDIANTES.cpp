#include<bits/stdc++.h>
using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
};

int main(){
	setlocale(LC_ALL,"");
	float menor=numeric_limits<float>::max(),mayor=numeric_limits<float>::min();
	int posmn=0,posmy=0,n;
	
	
	
	do{
		cout<<"Ingresa la cantidad de alumnos que quieres ingresar: ";
		cin>>n;
	}while(n<1);
	
	Alumno alumnos[n];
	
	for(int i=0;i<n;i++){
		cin.ignore();
		cout<<"Ingrese el nombre del estudiante "<<i<<": ";cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Edad: ";cin>>alumnos[i].edad;
		cout<<"Promedio: ";cin>>alumnos[i].promedio;
		
		if(alumnos[i].promedio<menor){
			menor=alumnos[i].promedio;
			posmn=i;
		}
		if(alumnos[i].promedio>mayor){
			mayor=alumnos[i].promedio;
			posmy=i;
		}
		
		cout<<endl;
		//fflush(stdin); //limpiar buffer - Libreria conio.h 
	}
	
	system("cls");
	
	cout<<endl<<"Alumno con mayor promedio: "<<endl;
	cout<<"Nombre: "<<alumnos[posmy].nombre<<endl;
	cout<<"Edad: "<<alumnos[posmy].edad<<endl;
	cout<<"Promedio: "<<alumnos[posmy].promedio<<endl;
	
	cout<<endl<<"Alumno con menor promedio: "<<endl;
	cout<<"Nombre: "<<alumnos[posmn].nombre<<endl;
	cout<<"Edad: "<<alumnos[posmn].edad<<endl;
	cout<<"Promedio: "<<alumnos[posmn].promedio<<endl;
	
	return 0;
}
