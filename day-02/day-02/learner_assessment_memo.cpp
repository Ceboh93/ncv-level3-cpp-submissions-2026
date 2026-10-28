#include <iostream>
#include <iomanip> // for formatting
using namespace std;

int main() {
    // C1: Named constants [2]
    const double PRICE_PER_KG = 89.99;
    const double VAT_RATE = 0.15;
    const int PIECES_PER_PACK = 12;
    const int GRAMS_PER_PIECE = 230;

    // C2: Suitable types with reason [2]
    // int for packs - whole packs only, cannot buy half pack
    // double for kg - needs decimal places for accurate weight
    int numberOfPacks;
    double totalKg, costExcl, totalIncl, vat_amount;

    // C1: Prompts and input [2]
    cout << "How many braai packs are you buying? ";
    cin >> numberOfPacks;

    // C2: Kg without int division [3] - KEY: 1000.0 not 1000
    totalKg = (numberOfPacks * PIECES_PER_PACK * GRAMS_PER_PIECE) / 1000.0;
    // If learner writes / 1000 it will be int division = C3 error

    // C2: Cost and VAT [3]
    costExcl = totalKg * PRICE_PER_KG;
    vat_amount = costExcl * VAT_RATE;
    totalIncl = costExcl  + vat_amount;

    // C2: Formatted output [2]
    cout << fixed << setprecision(2);
    cout << "\nHeritage Day Braai Report" << endl;
    cout << "-------------------------" << endl;
    cout << "Total meat: " << totalKg << " kg" << endl;
    cout << "Cost excl VAT: R" << costExcl << endl;
    cout << "Total incl VAT: R" << totalIncl << endl;

    return 0; // C1 [2]
}
