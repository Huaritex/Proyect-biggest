#include <iostream>

using namespace std;

int main(){ 
string str ;
getline(cin, str);



for(int i = 0; i <= str.size(); ++i){
    if(str[i] == ' '){
        cout << i << endl;
    }
}
cout << str.size() << endl;
return 0;
}