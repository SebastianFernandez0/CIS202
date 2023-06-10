#ifndef MOUNTAIN_H
#define MOUNTAIN_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

class Mountain {

private:
    string mounName;
    string country;
    double elevation;

public:
    // --------the constructor----------
    Mountain(const string& Name, const string& Country, double Elevation){
        this->mounName = Name;
        this->country = Country;
        this->elevation = Elevation;
    }

    // ----------the Getters-----------
    string getNa() const {
        return mounName;
    }

    string getCo() const {
        return country;
    } 

    double getElv() const {
        return elevation;
    }

    // ---------the Setters----------------
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

#endif