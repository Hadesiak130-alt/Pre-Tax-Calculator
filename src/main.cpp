#include <iostream>
#include <limits>

double PreTaxPercent(double postTax, double taxRate) {
    if (taxRate == 100) {
        std::cout << "\nbro...\n";
        return std::numeric_limits<int>::min();
    }
    return postTax/(1-taxRate/100);
}

double PreTaxDecimal(double postTax, double taxRate) {
    if (taxRate == 1) {
        std::cout << "\nbro...\n";
        return std::numeric_limits<int>::min();
    }
    return postTax/(1-taxRate);
}

int main() {
    int run = true;
    int mode;
    double a, b;
    while (run) {
        std::cout << "Pre-tax Calculator\n0 - Percentage\n1 - Decimal\n2 - exit\n> ";
        std::cin >> mode;
        switch (mode)
        {
            case 0:
                std::cout << "\nPost-Tax: ";
                std::cin >> a;
                std::cout << "\nTax Rate (%): ";
                std::cin >> b;
                std::cout << "Pre-Tax: " << PreTaxPercent(a, b) << "\n\n\n";
                break;
            case 1:
                std::cout << "\nPost-Tax: ";
                std::cin >> a;
                std::cout << "\nTax Rate (Decimal): ";
                std::cin >> b;
                std::cout << "Pre-Tax: " << PreTaxDecimal(a, b) << "\n\n\n";
                break;
            case 2:
                run = false;
                break;
            default:
                std::cout << "Invalid Input\n\n";
                break;
        }
    }
}