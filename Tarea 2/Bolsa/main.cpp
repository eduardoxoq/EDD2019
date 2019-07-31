#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
};
Nodo *Primero=NULL;
Nodo *Ultimo=NULL;



void InsertarBolsa(Nodo *&bolsa, int n){
    Nodo *NuevoNodo = new Nodo();
    NuevoNodo->dato= n;

    if(Primero == NULL){
        Primero = NuevoNodo;
        Primero->sig=Primero;
        Ultimo= Primero;
    }else{
        Ultimo->sig=NuevoNodo;
        NuevoNodo->sig=Primero;
        Ultimo=NuevoNodo;

    }
    cout<<"Numero Ingresado con Exito"<<endl;
    cout<<" "<<endl;
}

void MostrarBolsa(){
    Nodo *Actual = new Nodo;
    Actual = Primero;
    if(Primero!= NULL){
            do{
                cout<< Actual->dato <<"->";
                Actual=Actual->sig;
            }while(Actual!=Primero);

    }else{
        cout<<"Bolsa Vacia"<<endl;
    }

}
void ContarElementos(){
    Nodo *Actual = new Nodo;
    Actual = Primero;
    int contador=0;
    if(Primero!= NULL){
            do{
                contador++;
                Actual=Actual->sig;

            }while(Actual!=Primero);
            cout<< contador;
    }else{
        cout<<"Bolsa Vacia"<<endl;
    }
}

void EliminarDeBolsa(){
    Nodo *Actual = new Nodo;
    Actual = Primero;
    Nodo *Anterior = new Nodo;
    Anterior= NULL;
    bool encontrado = false;
    int NodoBuscado=0;
    cout<<"Ingrese el Dato a eliminar: ";
    cin>>NodoBuscado;
    if(Primero!= NULL){
            do{
                    if(Actual->dato==NodoBuscado){
                        if(Actual==Primero){
                           Primero=Primero->sig;
                            Ultimo->sig= Primero;
                        }else if(Actual==Ultimo){
                            Anterior->sig=Primero;
                            Ultimo=Anterior;
                        }else{
                            Anterior->sig=Actual->sig;
                        }
                        cout<<"Elemento eliminado"<<endl;
                        encontrado=true;
                    }
                    Anterior=Actual;
                    Actual= Actual->sig;
            }while(Actual!=Primero && encontrado!=true);
            if(!encontrado){
                cout<<"Nodo No Encontrado"<<endl;
            }

    }else{
        cout<<"Bolsa Vacia"<<endl;
    }
}


void Menu(){


}

int main()
{
    Nodo *bolsa = NULL;
    int data;

    int opcion;

    do{
            cout<<"Ingrese una opcion:"<<endl;
            cout<<"1) Ingresar Elemento en la bolsa"<<endl;
            cout<<"2) Mostrar Elementos de la bolsa"<<endl;
            cout<<"3) Contar Elementos de la bolsa"<<endl;
            cout<<"4) Eliminar Elemento de la bolsa"<<endl;
            cout<<"5) Salir"<<endl;

            cin>>opcion;

            switch(opcion){
            case 1:
                cout<<"Ingrese un Numero"<<endl;
                cin>>data;
                InsertarBolsa(bolsa,data);
                break;
            case 2:
                MostrarBolsa();
                cout<<" "<<endl;
                break;
            case 3:
                ContarElementos();
                cout<<" "<<endl;
                break;
            case 4:
                EliminarDeBolsa();
                cout<<" "<<endl;
                break;
            case 5:
                cout<<" Programa Cerrado "<<endl;
                cout<<" "<<endl;
                break;
            default:
                cout<<"Opcion Incorrecta"<<endl;
                cout<<" "<<endl;
            }

    }while(opcion!=5);


    return 0;
}


