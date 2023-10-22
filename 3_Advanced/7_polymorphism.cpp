/*
The Start method in the GasCar class is overridden to provide a different implementation.
Since the HybridCar is a child class of GasCar, it inherits the overridden method!
Polymorphism is demonstrated by creating an array of pointers to the base class Car and
invoking the Start and Stop methods on objects of different derived classes.The appropriate
overridden method is called based on the actual object type, showcasing the flexibility of polymorphism.

Note: `virtual` methods in parent class won't be invoked when there is an override in the child
class when we pass the reference to objects in that class to that function. Otherwise, method in the
parent class will be invoced.
*/

#include <iostream>
#include <string>

using namespace std;

class Car {
protected:
    string make;
    string model;
    int year;

public:
    Car(const string& carMake, const string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {}

    virtual void Start() {
        cout << "The " << year << " " << make << " " << model << " is starting." << endl;
    }

    virtual void Stop() {
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

    // Polymorphism: Override the Start method
    void Start() override {
        cout << "The " << year << " " << make << " " << model << " with a gas engine is starting." << endl;
    }
};

class HybridCar : public GasCar {
public:
    HybridCar(const string& carMake, const string& carModel, int carYear, int carFuelCapacity)
        : GasCar(carMake, carModel, carYear, carFuelCapacity) {}
};

int main() {
    system("clear"); // For windows use "cls"

    ElectricCar tesla("Tesla", "Model S", 2022, 75);
    GasCar ford("Ford", "Mustang", 2022, 15);
    HybridCar toyota("Toyota", "Prius", 2022, 10);

    Car* cars[] = {&tesla, &ford, &toyota};

    for (Car* car : cars) {
        /*
        When working with pointers to objects, we use the `->` operator
        to access the memberfunctions and attributes of the pointed-to objects.
        */
        car->Start();
        car->Stop();
        cout << endl;
    }

    return 0;
}
