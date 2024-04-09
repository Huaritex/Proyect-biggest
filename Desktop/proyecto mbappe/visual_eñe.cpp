#include <iostream>

using namespace std;

string cise_14(int number_docs){
  cin >> number_docs;
  if(number_docs == 0){
    cout << "no se encontro ningun documento" << endl;
  }
  else if(number_docs == 1){
    cout << "se encontro un documento" << endl;
  }
  else{
    cout << number_docs << "documentos encontrados" << endl;
  }
  return"";
}


