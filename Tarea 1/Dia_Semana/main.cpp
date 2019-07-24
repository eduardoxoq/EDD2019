#include <iostream>
//201602478 Eduardo Francisco Xoquic Poz

using namespace std;

int dia, mes, ano;
int A,B,C,D,E,aux1,aux2;
string Nombredia;


int fech,fecha;

void Meses(){
    switch (mes)
      {
         case 1:
            D=5;
            break;
         case 2:
            D=1;
            break;
         case 3:
            D=1;
            break;
         case 4:
            D=4;
            break;
         case 5:
            D=6;
            break;
         case 6:
            D=2;
            break;
         case 7:
            D=4;
            break;
         case 8:
            D=0;
            break;
         case 9:
            D=3;
            break;
         case 10:
            D=5;
            break;
         case 11:
            D=1;
            break;
         case 12:
            D=3;
            break;
         default:
           cout<<"Mes No valido";

      }

}

void Dias(){
    switch (fecha)
      {
          case 0:
            Nombredia="Domingo";
            break;
         case 1:
            Nombredia="Lunes";
            break;
         case 2:
            Nombredia="Martes";
            break;
         case 3:
            Nombredia="Miercoles";
            break;
         case 4:
            Nombredia="Jueves";
            break;
         case 5:
            Nombredia="Viernes";
            break;
         case 6:
            Nombredia="Sabado";
            break;
         default:
             Nombredia=" ";
           cout<<" No valido";
      }
      cout<<" "<<endl;
      cout<<"El dia de la fecha es: " <<Nombredia<<endl;


}
void Calculo(){
        aux2=aux1/4;
        B=aux1+aux2;

        if(aux1 % 4==0 && (mes == '1'||mes == '2') ){
                   C=-1;

        }else{
            C=0;
        }

        Meses();
        E=dia;

        //operatoria
        fech = A+B+C+D+E;

        fecha= fech % 7;
        Dias();
}


int main()
{

    cout << "Introdusca una fecha:" << endl;
    cout << "Dia: " << endl;
    cin >>dia;
    cout << "Mes: " << endl;
    cin >>mes;
    cout << "aNo: " << endl;
    cin >>ano;


    if(ano >=1700  && ano<=1799){
        A=6;
        aux1=ano-1700;

        Calculo();

    }else if(ano >=1800  && ano<=1899){
        A=4;
        aux1=ano-1800;
       Calculo();
    }
    else if(ano >=1900  && ano<=1999){
        A=2;
        aux1=ano-1900;
       Calculo();
    } else if(ano >=2000  && ano<=2099){
        A=1;
        aux1=ano-2000;
        Calculo();
    }

    return 0;
}
