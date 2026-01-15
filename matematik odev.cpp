#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cout << "Ikinci dereceden denklem: ax^2 + bx + c = 0\n";
    cout << "a katsayisini giriniz (a != 0): ";
    cin >> a;

    // a = 0 olursa ikinci dereceden olmaz
    if (a == 0) {
        cout << "Hata: a katsayisi sifir olamaz (denklem ikinci dereceden olmalidir).\n";
        return 1;
    }

    cout << "b katsayisini giriniz: ";
    cin >> b;
    cout << "c katsayisini giriniz: ";
    cin >> c;

    // Diskriminant hesaplama
    double delta = b * b - 4 * a * c;

    cout << fixed << setprecision(4);
    cout << "\nDiskriminant (?) = " << delta << endl;

    if (delta < 0) {
        cout << "Denklemin gercek koku yoktur (karmasik kokler vardir).\n";
    }
    else if (delta == 0) {
        double root = -b / (2 * a);
        cout << "Denklemin tek bir gercek koku vardir:\n";
        cout << "x = " << root << endl;
    }
    else { // delta > 0
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Denklemin iki farkli gercek koku vardir:\n";
        cout << "x1 = " << root1 << "\nx2 = " << root2 << endl;
    }

    return 0;
}
