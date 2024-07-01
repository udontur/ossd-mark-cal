/*
Program name: Ontario Secondary School Diploma Mark Calculator
Program: ossd-markcal.exe
GitHub link: github.com/udontur/ossd-mark-calculator
Date: July 2024
Author: github.com/udontur
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    
    cout << "\n[START] OSSD Mark Calculator\n\n";

    // 3 decimal points accuracy

    int numberOfItems;
    cout << "Enter the number of items\n";
    cout << ">>> ";
    cin >> numberOfItems;

    long long mark[numberOfItems];
    cout << "Enter the marks\n";
    cout << ">>> ";
    for (int i = 0; i < numberOfItems; i++) {
        double markInput;
        cin >> markInput;
        // Multiply the decimals to integers to maximize accuracy (3 decimal points)
        mark[i] = static_cast<long long>(markInput * 1000000);
    }

    cout << "Enter the denominators\n";
    cout << ">>> ";
    for (int i = 0; i < numberOfItems; i++) {
        long long denominatorInput;
        cin >> denominatorInput;
        // Calculate the mark with the denominator
        mark[i] /= denominatorInput;
    }

    long long weight[numberOfItems], totalWeight = 0;
    cout << "Enter the weights\n";
    cout << ">>> ";
    for (int i = 0; i < numberOfItems; i++) {
        double weightInput;
        cin >> weightInput;
        // store the weighting information for calculating the weighting
        totalWeight += weightInput * 10;
        // Multiply the weight to match the previous decimal scale up
        weight[i] = weightInput * 10000000;
    }

    cout << "\n";

    long long exactMarkProcess = 0;
    for (int i = 0; i < numberOfItems; i++) {
        // Calculate the mark with the weighting
        long long sectionMark = mark[i] * (weight[i] / totalWeight);
        // Decimal scale down after the calculation (keep 3+1 scaled up decimal points)
        exactMarkProcess += sectionMark / 1000000;
    }
    // Round off the exact mark
    if (exactMarkProcess % 10 >= 5) {
        exactMarkProcess += 10;
    }
    // Remove the extra scaled up decimal point
    exactMarkProcess /= 10;

    // Round off and scale down the final mark (no decimals) extracted from exact mark
    int finalMark = exactMarkProcess;
    finalMark /= 100;
    if (finalMark % 10 >= 5) {
        finalMark += 10;
    }
    finalMark /= 10;

    // Scale down the exact mark
    double exactMark = static_cast<double>(exactMarkProcess);
    exactMark /= 1000.0;

    cout << "Final Mark: " << finalMark << "\n";
    cout << fixed << setprecision(3);
    cout << "Exact Mark: " << exactMark << "\n";

    cout << "\n[END] OSSD Mark Calculator\n";

}
