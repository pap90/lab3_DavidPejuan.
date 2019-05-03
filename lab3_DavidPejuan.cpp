#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <string.h>
using namespace std;

int* calculadoraPrimos();

int main(){
	int seleccion;
	while(seleccion!= 4){
		cout <<"1) maximo comun divisor."<<endl
			<<"2) calculadora de primos."<<endl
			<<"3) guerras."<<endl
			<<"4)salir."<<endl
			<<"Ingrese su seleccion: ";
		cin >> seleccion;
		cout<<endl;
		switch (seleccion) {
			case 1:{
				       int num1;
				       int num2;
				       cout<<"Ingrese el primer numero: ";
				       cin>>num1;
				       cout<<"Ingrese el segundo numero: ";
				       cin>>num2;
				       if (num2>num1){
					       cout<<"el primer numero debe ser mas grande"<<endl;
				       		break;
				       }else{
					       int bandera;
					       while(num2!=0){
						       bandera=num2;
						       num2=num1%num2;
						       num1=bandera;
					       }
					       cout<<"El Maximo comun divisor es: "<<bandera<<endl<<endl;

				       }
			       }
				break;
			case 2:{
				       int numero;
				       int* primos=calculadoraPrimos();
				       cout<<"Ingrese un numero: ";
				       cin>>numero;
				       int numerooriginal=numero;
				       int i;
				       int cont=0;
				       cout<<numerooriginal<<"= ";
				       for(i=0;i<25;i++){
					        cont=0;
				       		int temp=primos[i];
						while(numero%primos[i]==0){
							numero=numero/primos[i];
							cont++;
						}
						if(cont==0){
						
						}else{
							cout<<"("<<primos[i]<<"^"<<cont<<")";
						}
				       }
				       cout<<endl;
			       }
			       break;
			case 3:{
				       vector<string> guerras;
				       int seleccion2;
				       while(seleccion2!=5){
					       cout<<"1) insertar guerra. "<<endl
						       <<"2) Buscar guerra. "<<endl
						       <<"3) eliminar guerra. "<<endl
						       <<"4) listar guerras. "<<endl
						       <<"5) salir"<<endl
						       <<"Ingrese su seleccion: ";
					       cin>>seleccion2;
					       switch(seleccion2){
						       case 1:{
								      stringstream guerra;
								      string pais;
								      stringstream paises;
								      string codigo,nombre,anioinicio,aniofin,continente;
								      cout<<"Ingrese el codigo: ";
								      cin>> codigo;
								      cout<<endl;
								      cout<<"Ingrese el nombre de la guerra :";
								      cin >> nombre;
								      cout<<endl;
								      cout<<"Ingrese el año de inicio de la guerra: ";
								      cin>>anioinicio;
								      cout<<endl;
								      cout<<"Ingrese el año final de la guerra: ";
								      cin>>aniofin;
								      cout<<endl;
								      int wh=1;
								      while(wh==1){
									      cout<< "ingrese un pais: ";
									      cin>>pais;
									      paises<<pais;
									      cout<<endl<<"Desea ingresar otro pais?[1)si/2)no]: ";
									      cin>>wh;
									      if(wh==1){
										      paises<<",";
									      }
								      }
								      cout<<endl;
								      cout<<"Ingrese continente: ";
								      cin>>continente;
								      cout<<endl;
								      guerra<<codigo<<";"<<nombre<<";"<<anioinicio<<";"<<aniofin<<";"<<paises.str()<<";"
									      <<continente;
								      guerras.push_back(guerra.str());


								      
							      }
							       break;
						       case 2:{
								      string cod;
								      cout<<"Ingrese el codigo de la guerra: ";
								      cin>>cod;
								      int j;
								      /*for(j=0;j<guerras.size();j++){
									      string* token=strtok(guerras.at(j),";");
									      cout token[0];
								      }*/

							      }
							      break;
						       case 3:{
							      }
							      break;
						       case 4:{
								      cout<<"1) listar todo. "<<endl;
							      }
							      break;
					       }

				       }



			       }
			       break;
		}
	}
}

int* calculadoraPrimos(){
	int* primos=new int[25];
	primos[0]=2;
	primos[1]=3;
	primos[2]=5;
	primos[3]=7;
	primos[4]=11;
	primos[5]=13;
	primos[6]=17;
	primos[7]=19;
	primos[8]=23;
	primos[9]=29;
	primos[10]=31;
	primos[11]=37;
	primos[12]=41;
	primos[13]=43;
	primos[14]=47;
	primos[15]=53;
	primos[16]=59;
	primos[17]=61;
	primos[18]=67;
	primos[19]=71;
	primos[20]=73;
	primos[21]=79;
	primos[22]=83;
	primos[23]=89;
	primos[24]=97;
	return primos;
}
