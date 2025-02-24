
#include <iostream>
#include <random>
#include <ctime>
#include <string>
using namespace std;

mt19937 gen(time(0));
int arunca_zar(int min, int max);
int numar_zaruri();
string check_WinCon(bool win_con);

int main() {
#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

mt19937 gen(time(0));
int arunca_zar(int min, int max);
int numar_zaruri();
string check_WinCon(bool win_con);

class zar_6 {

public:
    int val_min_6 = 1;
    int val_max_6 = 6;
    void roll6 (void){
        uniform_int_distribution<> distrib(val_min_6, val_max_6);
        return distrib(gen);
    };
};

int main() {
    int nr_zar = numar_zaruri();
    int val_zar;
    bool win_con = true;
    cout << "Se arunca zarurile: " << endl;
    for (int i = 0; i < nr_zar; ++i) {
        val_zar = arunca_zar(min, max);
        cout << "Zarul nr.  " << (i + 1) << ": " << val_zar << endl;
        if (val_zar != 1) {
            win_con = false;
        }
    }
    cout << check_WinCon(win_con) << endl;
    return 0;
}

int numar_zaruri() {
    int z;
    cout << "Alegeti numarul de zaruri: " << endl;
    cin >> z;
    return z;
}

int arunca_zar(int min, int max) {

    uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}
string check_WinCon(bool win_con) {
    if (win_con) {
        return "AI CASTIGAT!!!";
    }
    else {
        return "Incearca din nou!";
    }
}
    int min = 1;
    int max = 1;
    int nr_zar = numar_zaruri();
    int val_zar;
    bool win_con = true;
    cout << "Se arunca zarurile: " << endl;
    for (int i = 0; i < nr_zar; ++i) {
        val_zar = arunca_zar(min, max);
        cout << "Zarul nr.  " << (i + 1) << ": " << val_zar << endl;
        if (val_zar != 1) {
            win_con = false;
        }
    }
    cout << check_WinCon(win_con) << endl;
    return 0;
}

int numar_zaruri() {
    int z;
    cout << "Alegeti numarul de zaruri: " << endl;
    cin >> z;
    return z;
}

int arunca_zar(int min, int max) {

    uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}
string check_WinCon(bool win_con) {
    if (win_con) {
        return "AI CASTIGAT!!!";
    }
    else {
        return "Incearca din nou!";
    }
}