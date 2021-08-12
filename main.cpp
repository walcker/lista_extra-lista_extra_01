#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {

  vector<int> valores;
  int aux;

  for(int i = 0; i < 5; i++){
    cout << "Entre com o valor: " << i << endl;
    cin >> aux;
    valores.push_back(aux);
  }
   
  cout << "Vetor: ";
  for(int i = 0; i < 5; i++){    
    cout << valores[i] << " ";
  }

  return 0;
}