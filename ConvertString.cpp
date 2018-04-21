#include <iostream>
#include <sstream>

using namespace std;

std::string Convert (float number){
    std::ostringstream buff;
    buff<<number;
    return buff.str();
}

int main(){
    float Num;
    cout << "Ingrese un numero : ";
    cin >> Num;
    cout << endl << "Numero digitado es: " << Num;

    // Ahora convertir
    string NumeroString = Convert(Num);
    cout << endl << "String :" << NumeroString;

    return 0;
}
