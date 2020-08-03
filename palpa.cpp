//Creado por Juan Sebastian Gomez Vera
//Se le pide al usuario que ingrese una palabra y se identificará si es palindroma o no.

#include <iostream>
#include <cstdlib>
 
using namespace std;
 
bool palindroma (string cad ){ //Creamos una funcion llamada palindroma.
	int i = 0, j = cad.size()-1; //declaramos la primera letra como i y la ultima como j
	while (i<j){ //mientras que la letra i no se cruce con la j:
		if(cad[1] != cad[j]) return false; //Si son diferentes es falsa la funcion.
		//Si no se le suma 1 a i y a j, así pasamos a la siguiente letra.
		i++;
		j--;
	}
	return true; //cuando i y j se crucen, es porque no se interrumpió el conteo, es decir, es palindroma, se retorna verdadera la funcion.
}

int main (){
	string cadena; //creamos la variable cadena, donde se almacena la palabra.
	cout<<"Ingrese una Palabra"<<endl; //mensaje para ingresar la palabra.
	cin >> cadena;
	if (palindroma(cadena)==true)cout <<"no es palindroma"; //mandamos la palabra a la funcion palindroma y si es verdadera se imprime el mensaje.
	else cout<<"es palindroma"; // si no se imprime un mensaje diciendo que no lo es.
}