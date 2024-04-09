#include<iostream>


using namespace std;

int main()
{
    for (int cnt = 0; cnt <= 100; ++ cnt){
        if(cnt % 2 == 0){
            cout <<" El numero " << cnt << "es divisible entre 2" << endl;
        }if(cnt % 3 == 0){
            cout << "El numero " << cnt << "es divisible entre 3" << endl;
        }if(cnt % 5 == 0){
            cout << "El numero " << cnt << "es divisible entre 5" << endl;
        }
    }
    return 0;
}
