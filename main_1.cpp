// KHALID - SAQLAIN
// ES 14 a Pg. A257

#include <iostream>
#include <string>

using namespace std;

int numOccorenza(string frase, char c);


int main() {
    string s;
    char c;

    cout << "Scrivi la frase: ";
    cin >> s;

    cout << "Scrivi un carattere: ";
    cin >> c;

    cout << c << " e presente " << numOccorenza(s, c) << "volte nella frase!" << endl;

    return 0;
}


int numOccorenza(string frase, char c) {
    int start = 0;
    int end = frase.size();

    if (start == end) {
        return 0;
    } else if (frase[start] == c) {
        frase.erase(0, 1);
        return numOccorenza(frase, c);
    }
}