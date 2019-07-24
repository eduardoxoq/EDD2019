#include <iostream>

//201602478 Eduardo Francisco Xoquic Poz
using namespace std;

int main()
{
    int Numero;
    cout<<"Introduzca un Numero: "<<endl;
    cin>>Numero;

    bool Primo[Numero];

    for(int i=0; i<Numero;i++){
        Primo[i]= true;
    }

    for(int j=2; j<Numero; j++){
        for(int k=2; j*k<Numero; k++){
            Primo[j*k]=false;
        }
    }

    for(int n=2; n<Numero;n++){
            if(Primo[n]==true){
                cout<<n<<" ";
            }

    }

    return 0;
}
