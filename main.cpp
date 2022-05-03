#include <iostream>

/*CONSTRUIR LA TABLA DE DIVIDIR QUE EL USUARIO INDIQUE.*/

using namespace std;
int main(int argc, char** argv) {



float a,b,c;

cout<<"Ingrese la tabla de dividir que desea"<<endl;
cin>>a;

b=1;

while (b<=10){
	
	c=a/b;
	cout<<a<<"/"<<b<<"="<<c<<endl;
	b=b+1;
}
system("pause");
}
