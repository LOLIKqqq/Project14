#include <iostream>
#include <vector>
using namespace std;
struct CarShowroom {
    string name;
    int totalSales;
};

int main() {
    vector<CarShowroom> showrooms = { {"Showroom1", 50000}, {"Showroom2", 75000}, {"Showroom3", 100000} };

    CarShowroom richestShowroom = showrooms[0];

    for (const auto& showroom : showrooms) {
        if (showroom.totalSales > richestShowroom.totalSales) {
            richestShowroom = showroom;
        }
    }

    cout << "The richest car showroom is: " << richestShowroom.name << " with total sales of $" << richestShowroom.totalSales << endl;

    return 0;
}