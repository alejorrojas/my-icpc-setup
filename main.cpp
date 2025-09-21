#include "libs.h"

#define all(x) x.begin(), x.end()
template<typename T>
void printVector(const vector<T> &v) {
    for (const auto &el : v) {
        cout << el << " ";
    }
    cout << endl;
}


int main() {
  int n;
  cin >> n; // leemos la cantidad de partidos

  vector<int> partidos(n);
  for (int i = 0; i < n; i++) {
    cin >> partidos[i]; // leemos cada resultado (0 o 1)
  }
  
  // Ejemplo: imprimir lo que leímos
  for (int x : partidos) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}