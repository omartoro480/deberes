#include <iostream>
using namespace std;

int main() {
  string lugar;
  float ttcablest,ttcables,ca,tt=0,puntosred,acu=0,distancia,nconectores,ttcategoria,tttconectores,ttconectores,ttconec,ttmaterial,ganancia,totalpagar;
  cout<<"\t\t*Empresa Electrocables*"<<endl;
  cout<<"\t   Este es un software contable"<<endl<<endl;
  cout<<"Ingrese el lugar de la instalacion"<<endl;
  cin>>lugar;
  
  cout<<"\nIngrese el numero de puntos de red que van a ser instalados"<<endl;
  cin>>puntosred;

  for(int i=1;i<=puntosred;i++){
    acu=acu+1;
    cout<<"\nPunto de red #"<<acu<<endl;
    cout<<"Ingrese la distancia entre el conector del punto de red hasta el equipo de conectividad"<<endl;
    cin>>distancia;
    cout<<"Ingrese el numero de conectores para el punto de red"<<endl;
    cin>>nconectores;
    tt=tt+(distancia*nconectores);
    ttcables=(tt*5)/100;
    ttcablest=tt+ttcables;
    ttcategoria=tt*0.90;
    ttconectores=ttconectores+(nconectores*2)*0.50;
    ttconec=(ttconectores*15)/100;
    tttconectores=ttconectores+ttconec;
    ttmaterial=ttcategoria+tttconectores;
    ganancia=(ttmaterial*45)/100;
    totalpagar=ttmaterial+ganancia;

  }
  cout<<"\t\t\tDETALLE DE LA INSTALACION"<<endl<<endl;
  cout<<"La distacia total del cable utilizado en la instalacion es: "<<ttcablest<<"$"<<endl;
  cout<<"El costo del cable segun la categoria 5e es: "<<ttcategoria<<"$"<<endl;
  cout<<"El precio total de los conectores RJ45 (hembra y macho) es: "<<tttconectores<<"$"<<endl;
  cout<<"El total del material utilizado es: "<<ttmaterial<<"$"<<endl;
  cout<<"La ganacia es: "<<ganancia<<"$"<<endl;
  cout<<"El total a pagar por su instalacion es: "<<totalpagar<<"$"<<endl;
}