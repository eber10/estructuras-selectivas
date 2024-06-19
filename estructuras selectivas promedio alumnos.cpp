#include<iostream>
#include<string>

using namespace std;
int main()
{
	int op;
    double promedio, igv, descuento, pension, pagofinal, parcial_1, parcial_2, prom;
    string user, clave;
    cout<<" BIENVENIDO AL SISTEMA ACADEMICO "<<endl;
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
                break;
            case 2:
            	cout<<"Ingrese su nota del  primer parcial: "; cin>>parcial_1;
            	cout<<"Ingrese su nota del segundo parcial: "; cin>>parcial_2;
            	prom=(parcial_1+parcial_2)/2;
            	cout<<"PROMEDIO: " <<prom<<endl;
            	break;
            default: 
            	break;
		}
	}
	while(op!=0);
	cout<<"GRACIAS POR USAR NUESTRO SISTEMA ACADEMICO "<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"   *************************************   "<<endl;
	
    
    return 0;
}
