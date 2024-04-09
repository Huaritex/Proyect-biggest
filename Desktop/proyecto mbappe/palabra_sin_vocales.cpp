#include<iostream>
using namespace std;

int main(){

bool verificar_caracteres_ascii(const string & contraseña) {
    for (char c ; contraseña) {
        if (c < 33 || c > 126) {
            return false;
        }
    }
    return true;
}

bool contiene_letras_mayusculas(const string & contraseña) {
    for (char c ; contraseña) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

bool contiene_letras_minusculas(const string & contraseña) {
    for (char c ; contraseña) {
        if (islower(c)) {
            return true;
        }
    }
    return false;
}

bool contiene_digitos(const string & contraseña) {
    for (char c ; contraseña) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool contiene_simbolos(const string & contraseña) {
    for (char c ; contraseña) {
        if (!isalnum(c)) {
            return true;
        }
    }
    return false;
}

bool verificar_contraseña(const string & contraseña) {
    if (contraseña.length() < 8 || contraseña.length() > 14) {
        return false;
    }

    if (!verificar_caracteres_ascii(contraseña)) {
        return false;
    }

    int conjuntos_de_caracteres = 0;
    if (contiene_letras_mayusculas(contraseña)) {
        conjuntos_de_caracteres++;
    }
    if (contiene_letras_minusculas(contraseña)) {
        conjuntos_de_caracteres++;
    }
    if (contiene_digitos(contraseña)) {
        conjuntos_de_caracteres++;
    }
    if (contiene_simbolos(contraseña)) {
        conjuntos_de_caracteres++;
    }

    if (conjuntos_de_caracteres < 3) {
        return false;
    }

      return true;
}
}