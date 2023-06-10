#include"mountain.h"

using namespace std;

Mountain findMin(const vector<Mountain>& mountains) {

    Mountain smallest = mountains[0];

    for (const Mountain& mountain : mountains) {

        if (mountain.getElv() < smallest.getElv()) {
            smallest = mountain;
        }
    }
    return smallest;
}