#include <iostream>
using namespace std;

int main() {
    int kawalki, goscie;
    kawalki = 8;  
    cout << "Podaj liczbe gości: ";
    cin >> goscie;
    int kawalkiDlaGosci = kawalki / goscie;
    int kawalkiDlaOrganizatora = kawalki % goscie;
    
    cout << "Gość otrzyma: " << kawalkiDlaGosci << " kawałków, a organizator otrzyma: " << kawalkiDlaOrganizatora;
    return 0;
}