// KHALID - SAQLAIN
// ES 16 a Pg. A257

#include <iostream>

using namespace std;

const int N = 10;

void stampa(int array[]);
int massimo(int array[], int max, int index);

int main() {
    int array[N];
    int max = array[0];
    
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 100;
    }
    
    stampa(array);

    cout << "Numero massimo: " << massimo(array, max, 0) << endl;

    return 0;
}

void stampa(int array[]) {
    for (int i = 0; i < N; i++) {
        cout << array[i] << endl;
    }
}

int massimo(int array[], int max, int index) {
    if (index >= N) return max;

    if (max < array[index]) max = array[index];

    return massimo(array, max, index+1);

}