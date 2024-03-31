// KHALID - SAQLAIN
// ES 16 a Pg. A257

#include <iostream>

using namespace std;

const int N = 10;

void stampa(int array[]) {
    for (int i = 0; i < N; i++) {
        cout << array[i] << endl;
    }
}

int main() {
    int array[N];
    
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 100;
    }
    
    stampa(array);

    return 0;
}