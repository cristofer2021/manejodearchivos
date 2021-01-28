#include <iostream>
using namespace std;

#include<fstream>


int main() {
string nombre;
string apellido;
int edad;
char r;
ofstream archivoprueba;
string nombrearchivo;
cout<<" ingrese el nombre del archivo:";
//cin>>nombrearchivo;
getline(cin,nombrearchivo);
archivoprueba.open(nombrearchivo.c_str(),ios::out); 
do{
  cout<<"\t Ingrese el nombre:";
  getline(cin,nombre);
  cout<<"\t Ingrese el Apellido:";
  getline(cin,apellido);
  cout<<"\t Ingrese edad :";
  cin>>edad;
  archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<"\n";
  cout<<" desea ingrear otro contacto:";
  cin>>r;
  cin.ignore();


}while(r=='s');
archivoprueba.close();
ifstream archivolectura(nombrearchivo.c_str());
string texto;
while(!archivolectura.eof()){
  archivolectura>>nombre>>apellido>>edad;
 
  if (!archivolectura.eof()){
  cout<<"Nombre :"<<nombre<<"\n";
  cout<<"Apellido :"<<apellido<<"\n";
  cout<<"edad :"<<edad<<"\n";
}
}
archivolectura.close();
}