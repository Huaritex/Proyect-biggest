#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int cnt = 0;
    while ( cnt <= 100){
        if(cnt % 2== 0);{
            cout << " El numero es" << cnt << "entre 2" << endl;
        }if (cnt % 3 == 0){
            cout << "El numero" << cnt << " es divisible entre 3" << endl;
        }if (cnt % 5 == 0){
            cout << "el numero" << cnt << " es divisible entre 5" << endl;
        }
    }
    

    return 0;
}





