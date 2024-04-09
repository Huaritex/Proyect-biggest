#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero: "; cin >>n;
    if (n == 2){
        cout << "es numero primo";
    }
    else if (n % 2 == 0){
        cout << "no es numero primo";
    }
    else if (n % n == 0){
        cout << "es numero primo";
    }
    else if(n % 1 == 0){
        cout << "es numero primo";
    }
    else if( n % 3 == 0){
        cout << "no es numero primo";
    }

        
       
     


    
    

    return 0;
}
