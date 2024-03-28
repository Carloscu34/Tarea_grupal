#include <iostream>
#include <vector>

using namespace std;

// Función para convertir un número decimal a binario
vector<int> decimalToBinary(int decimal) {
    vector<int> binary;

    // Manejar el caso especial del 0
    if (decimal == 0) {
        binary.push_back(0);
        return binary;
    }

    // Calcular el binario
    while (decimal > 0) {
        int bit = decimal % 2;
        binary.insert(binary.begin(), bit);
        decimal /= 2;
    }

    return binary;
}

int main() {
    int numeroDecimal;

    // Solicitar al usuario ingresar el número decimal
    cout << "Ingrese un número decimal: ";
    cin >> numeroDecimal;

    // Convertir el número decimal a binario
    vector<int> binario = decimalToBinary(numeroDecimal);

    // Mostrar el resultado
    cout << "El número binario correspondiente es: ";
    for (size_t i = 0; i < binario.size(); ++i) {
        cout << binario[i];
    }
    cout << endl;

    return 0;
}



