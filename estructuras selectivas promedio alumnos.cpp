#include<iostream>
#include<string>

using namespace std;
int main()
{
	int op;
    double promedio, igv, descuento, pension, pagofinal;
    string user, clave;
    cout<<"BIENVENIDO AL SISTEMA "<<endl;
    cout<<"**********************"<<endl;
    cout<<"USUARIO: "; cin>>user;
    cout<<"CLAVE: "; cin>>clave;
    do
    {
    	cout<<"1. pension "<<endl;
    	cout<<"2. promedio "<<endl;
    	cout<<"0. salir "<<endl;
    	cin>>op;
    	switch(op)
    	{
    		case 1:
    			cout<<"Ingrese su promedio: "; cin>>promedio;
                cout<<"Ingrese la pension educativa: "; cin>>pension;
                if(promedio>=18)
                {
                    descuento=(pension*0.3);
                    igv=0;
                }
                else
                {
                    descuento=0;
                    igv=(pension*0.18);
                }
                pagofinal=((pension-descuento)+igv);
                cout<<"Su pension a pagar es: S/. " <<pagofinal<<endl;
            case 2:
            	break;
            default: 
            	break;
		}
	}
	while(op!=0);
    
    return 0;
}
