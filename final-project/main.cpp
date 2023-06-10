#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


using namespace std;

class Mountain {

private:
    string mounName;
    string country;
    double elevation;

public:
    // ----------Constructor------------
    Mountain(const string& Name, const string& Country, double Elevation){
        this->mounName = Name;
        this->country = Country;
        this->elevation = Elevation;
    }

    // ------------Getters-------------
    string getName() const {
        return mounName;
    }

    string getCo() const {
        return country;
    } 

    double getElv() const {
        return elevation;
    }

    // -----------Setters--------------
    void setNa(const string& Name){
        this->mounName = Name;
    }

    void setCo(const string& Country){
        this->country = Country;
    }

    void setEl(double Elevation){
        this->elevation = Elevation;
    }

    double toMeters() const {
        return elevation / 3.2808;
    }
};

Mountain findMin(const vector<Mountain>& mountains) {

    Mountain smallest = mountains[0];

    for (const Mountain& mountain : mountains) {

        if (mountain.getElv() < smallest.getElv()) {
            smallest = mountain;
        }
    }
    return smallest;
}

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
    cout << left << setw(30) << "Mountain" << setw(25) << "Country" << setw(17) << "Elevation (ft)" << "Elevation (m)" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;

    // Table
    for (const Mountain& mountain : info) {
        cout << left << setw(30) << mountain.getName() << setw(25) << mountain.getCo() << setw(18) << mountain.getElv() << mountain.toMeters() << endl;
    }

    Mountain min = findMin(info);

    cout << endl;
    cout<< min.getName() << " is the smallest mountain with an Elevation of " << min.getElv() << " ft." << endl;

    return 0;
}