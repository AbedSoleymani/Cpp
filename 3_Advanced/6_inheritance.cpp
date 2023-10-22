#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Car {
protected:
    string make;
    string model;
    int year;

public:
    Car(const string& carMake, const string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {}

    void Start() {
        cout << "The " << year << " " << make << " " << model << " is starting." << endl;
    }

    void Stop() {
        cout << "The " << year << " " << make << " " << model << " is stopping." << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(const string& carMake, const string& carModel, int carYear, int carBatteryCapacity)
        : Car(carMake, carModel, carYear), batteryCapacity(carBatteryCapacity) {}

    void Charge() {
        cout << "Charging the electric car with a battery capacity of " << batteryCapacity << " kWh." << endl;
    }
};

class GasCar : public Car {
private:
    int fuelCapacity;

public:
    GasCar(const string& carMake, const string& carModel, int carYear, int carFuelCapacity)
        : Car(carMake, carModel, carYear), fuelCapacity(carFuelCapacity) {}

    void Refuel() {
        cout << "Refueling the gas car with a fuel capacity of " << fuelCapacity << " gallons." << endl;
    }
};

int main() {
    system("clear"); // For windows use "cls"
    
    ElectricCar tesla("Tesla", "Model S", 2022, 75);
    GasCar ford("Ford", "Mustang", 2022, 15);

    tesla.Start();
    tesla.Charge();
    tesla.Stop();

    ford.Start();
    ford.Refuel();
    ford.Stop();

    return 0;
}
