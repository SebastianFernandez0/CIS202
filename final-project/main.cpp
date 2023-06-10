#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include"mountain.h"

using namespace std;

int main() {
// Mountain Info
    vector<Mountain> info;


    info.push_back(Mountain("Chimborazo","Ecuador",20549));
    info.push_back(Mountain("Matterhorn", "Switzerland", 14692));
    info.push_back(Mountain("Olympus", "Greece (Macedonia)", 9573));
    info.push_back(Mountain("Everest", "Nepal", 29029));
    info.push_back(Mountain("Mount Marcy - Adirondacks", "United States", 5344));
    info.push_back(Mountain("Mount Mitchell - Blue Ridge", "United States", 6684));
    info.push_back(Mountain("Zugspitze", "Switzerland", 9719));

    // Title
    cout << left << setw(30) << "Mountain" << setw(25) << "Country" << setw(18) << "Elevation (ft)" << "Elevation (m)" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;

    // Table
    for (const Mountain& mountain : info) {
        cout << left << setw(30) << mountain.getNa() << setw(25) << mountain.getCo() << setw(18) << mountain.getElv() << mountain.toMeters() << endl;
    }

    Mountain min = findMin(info);

    cout << endl;
    cout<< min.getNa() << " is the smallest mountain in the list with a Elevation of " << min.getElv() << " ft." << endl;

    return 0;
}