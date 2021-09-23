#include<iostream>
using namespace std;
int main() {
    int GodRodjenja, Starost, Mjeseci;
    int TrenutnaGodina;
    int Mjesec;
    cout << "Koje ste godine rodjeni? " << endl;
    cin >> GodRodjenja;
    cout << "Koja je trenutna godina? " << endl;
    cin >> TrenutnaGodina;
    Starost = TrenutnaGodina - GodRodjenja;
    cout << "Trenutno imate " << Starost << endl;
    return 0;