#include <bits/stdc++.h>

using namespace std;

class Temperature {
private:
    double celsius;

public:

    Temperature(double c) {
        setCelsius(c);
    }

    void setCelsius(double c) {
        if (c >= -273.15) {
            celsius = c;
        } else {
            cout << "Error: Below absolute zero!" << endl;
        }
    }


    double getCelsius() const {
        return celsius;
    }

    double toFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    double toKelvin() const {
        return celsius + 273.15;
    }

    void display() const {
        cout << fixed << setprecision(2);
        cout << "Celsius : " << celsius << endl;
        cout << "Fahrenheit : " << toFahrenheit() << endl;
        cout << "Kelvin : " << toKelvin() << endl;
    }
};

int main() {
    Temperature t(100);
    t.display();

    return 0;
}
