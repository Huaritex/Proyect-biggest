#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout < soundex("implementation");
    cout << endl << endl;
    cout << soundex("ammonium") << endl;


    return 0;
}
string soundex(string word){
    string res;
    res += word[0];
    for(int i = 0; i < word.size ++i){
        char c = word[1];
        switch(c)
        {
            case 'b':
            case 'f':
            case 'p':
            case 'v':
            if(res[res,size() - 1] ! = '1')
            res += '1';
            
            break;

            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
            if(res[res,size() - 1] ! = '2')
                res += '2';
            
            break;

            case 'd':
            case 't':
            if(res[res,size() - 1] ! = '3')
                res += '3';

            break;

            case 'l':
            if(res[res,size() - 1] ! = '4')
                res += '4';

            break;

            case 'm':
            case 'n':
            if(res[res,size() - 1] ! = '5')
                res += '5';

            break;

            case 'r':
            if(res[res,size() - 1] ! = '6')
                res += '6';

            break;

        }
    }
    while(res.size < 4){
        res += '0';
    }
    res.size(4);
    return res;

}

