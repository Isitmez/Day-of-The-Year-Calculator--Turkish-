#include <iostream>
#include <string>

using namespace std;

int main() {
    int gun, ay, yil;

    cout << "Gunu giriniz: ";
    cin >> gun;

    cout << "Ayi giriniz: ";
    cin >> ay;

    cout << "Yili giriniz: ";
    cin >> yil;

    int gun_sayisi = 0;

    for (int i = 1; i < ay; i++) {
        switch (i) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            gun_sayisi += 31;
            break;
        case 4: case 6: case 9: case 11:
            gun_sayisi += 30;
            break;
        case 2:
            if ((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0)
                gun_sayisi += 29;
            else
                gun_sayisi += 28;
            break;
        default:
            cout << "Gecersiz ay!" << endl;
            return 1;
        }
    }

    gun_sayisi += gun;

    string gun_ismi;
    switch (gun_sayisi % 7) {
    case 1: gun_ismi = "Pazartesi";
        break;
    case 2: gun_ismi = "Sali";
        break;
    case 3: gun_ismi = "Carsamba";
        break;
    case 4: gun_ismi = "Persembe";
        break;
    case 5: gun_ismi = "Cuma";
        break;
    case 6: gun_ismi = "Cumartesi";
        break;
    case 0: gun_ismi = "Pazar";
        break;
    default:
        cout << "Gecersiz gun!" << endl;
        return 1;
    }

    cout << gun << "/" << ay << "/" << yil << " " << gun_ismi << " yilin " << gun_sayisi << ". gunudur.\n";

    return 0;
}
