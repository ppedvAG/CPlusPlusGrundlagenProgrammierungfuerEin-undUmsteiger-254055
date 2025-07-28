#include <iostream>
#include <bitset>

int main() {
    unsigned int bitmuster = 4;

    int zu_pruefende_position = 2;

    std::cout << "--- Durchlauf 1 ---" << std::endl;
    std::cout << "Bitmuster (Wert): " << bitmuster << std::endl;
    std::cout << "Bitmuster (Binär): " << std::bitset<8>(bitmuster) << std::endl;

    unsigned int maske = 1 << zu_pruefende_position;

    std::cout << "Maske (Binär):     " << std::bitset<8>(maske) << std::endl;

    if ((bitmuster & maske) != 0) {
        std::cout << "Ergebnis: Bit an Position " << zu_pruefende_position << " ist gesetzt." << std::endl;
    }
    else {
        std::cout << "Ergebnis: Bit an Position " << zu_pruefende_position << " ist nicht gesetzt." << std::endl;
    }

    std::cout << "\n=======================================\n" << std::endl;

    bitmuster = 13;

    std::cout << "--- Durchlauf 2 (mit geänderten Daten) ---" << std::endl;
    std::cout << "Bitmuster (Wert): " << bitmuster << std::endl;
    std::cout << "Bitmuster (Binär): " << std::bitset<8>(bitmuster) << std::endl;

    std::cout << "Maske (Binär):     " << std::bitset<8>(maske) << " (unverändert)" << std::endl;

    if ((bitmuster & maske) != 0) {
        std::cout << "Ergebnis: Bit an Position " << zu_pruefende_position << " ist immer noch gesetzt." << std::endl;
    }
    else {
        std::cout << "Ergebnis: Bit an Position " << zu_pruefende_position << " ist nicht gesetzt." << std::endl;
    }

    return 0;
}