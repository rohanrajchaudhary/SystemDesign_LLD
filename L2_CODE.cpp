// abstraction code/

// #include <iostream>
// #include <string>

// using namespace std;

// /*
// Abstract class --> Act as an interface for Outsiude world to operate the car. 
// This abstract class tells 'WHAT' all it can do rather then 'HOW' it does that.
// Since this is an abstract class we cannot directly create Objects of this class. We
// need to Inherit it first and then that child class will have the responsibility to 
// provide implementation details of all the abstract (virtual) methods in the class.

// In our real world example of Car, imagine you sitting in the car and able to operate
// the car (startEngine, accelerate, brake, turn) just by pressing or moving some
// pedals/buttons/stearing wheel etc. You dont need to know how these things work, and
// also they are hidden under thre hood.
// This Class 'Car' denotes that (pedals/buttons/stearing wheel etc). 
// */
// class Car {
// public:
//     virtual void startEngine() = 0;
//     virtual void shiftGear(int gear) = 0;
//     virtual void accelerate() = 0;
//     virtual void brake() = 0;
//     virtual void stopEngine() = 0;
//     virtual ~Car() {}
// };

// /*
// This is a Concrete class (A class that provide implementation details of an abstract class).
// Now anyone can make an Object of 'SportsCar' and can assign it to 'Car' (Parent class) pointer 
// (See main method for this)

// In our real world example of Car, as you cannot have a real car by just having its body only
// (all these buttons or pedals). You need to have the actual implementation of 'What' happens
// when we press these buttons. 'SportsCar' class denotes that actual implementation. 

// Hence we can concude, to denote a real world car in programming we created 2 classes.
// One to deonte all the user-interface like pedals, buttons, stearing wheels etc ('Car' class).
// And another one to denote the actual car with all the implementations of these buttons (SportsCar' class).
//  */
// class SportsCar : public Car {
// public:
//     string brand;
//     string model;
//     bool isEngineOn;
//     int currentSpeed;
//     int currentGear;

//     SportsCar(string b, string m) {
//         this->brand = b;
//         this->model = m;
//         isEngineOn = false;
//         currentSpeed = 0;
//         currentGear = 0;
//     }

//     void startEngine() {
//         isEngineOn = true;
//         cout << brand << " " << model << " : Engine starts with a roar!" << endl;
//     }

//     void shiftGear(int gear) {
//         if (!isEngineOn) {
//             cout << brand << " " << model << " : Engine is off! Cannot Shift Gear." << endl;
//             return;
//         }
//         currentGear = gear;
//         cout << brand << " " << model << " : Shifted to gear " << currentGear << endl;
//     }

//     void accelerate() {
//         if (!isEngineOn) {
//             cout << brand << " " << model << " : Engine is off! Cannot accelerate." << endl;
//             return;
//         }
//         currentSpeed += 20;
//         cout << brand << " " << model << " : Accelerating to " << currentSpeed << " km/h" << endl;
//     }

//     void brake() {
//         currentSpeed -= 20;
//         if (currentSpeed < 0) currentSpeed = 0;
//         cout << brand << " " << model << " : Braking! Speed is now " << currentSpeed << " km/h" << endl;
//     }

//     void stopEngine() {
//         isEngineOn = false;
//         currentGear = 0;
//         currentSpeed = 0;
//         cout << brand << " " << model << " : Engine turned off." << endl;
//     }
// };

// // Main Method
// int main() {

//     Car* myCar = new SportsCar("Ford", "Mustang");

//     myCar->startEngine();
//     myCar->shiftGear(1);
//     myCar->accelerate();
//     myCar->shiftGear(2);
//     myCar->accelerate();
//     myCar->brake();
//     myCar->stopEngine();

//     delete myCar;    

//     return 0;
// }  


// encapsulation code

#include <iostream>
#include <string>

using namespace std;

/*
Encapsulation says 2 things:
1. An Object's Characteristics and its behaviour are encapsulated together
within that Object.
2. All the characteristics or behaviours are not for everyone to access.
Object should provide data security.

We follow above 2 pointers about Object of real world in programming by:
1. Creating a class that act as a blueprint for Object creation. Class contain
all the characteristics (class variable) and behaviour (class methods) in one block,
encapsulating it together.
2. We introduce access modifiers (public, private, protected) etc to provide data
security to the class members.
*/
class SportsCar {
private:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;

    //Introduce new variable to explain setters
    string tyreCompany;
 
public:
    SportsCar(string b, string m) {
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;
        tyreCompany = "MRF";
    }

    int getSpeed() {
        return currentSpeed;
    }

    string getTyreCompany() {
        return tyreCompany;
    }

    void setTyreCompany(string tyreCompany) {
        this->tyreCompany = tyreCompany;
    }

    void startEngine() {
        isEngineOn = true;
        cout << brand << " " << model << " : Engine starts with a roar!" << endl;
    }

    void shiftGear(int gear) {
        if (!isEngineOn) {
            cout << brand << " " << model << " : Engine is off! Cannot Shift Gear." << endl;
            return;
        }
        currentGear = gear;
        cout << brand << " " << model << " : Shifted to gear " << currentGear << endl;
    }

    void accelerate() {
        if (!isEngineOn) {
            cout << brand << " " << model << " : Engine is off! Cannot accelerate." << endl;
            return;
        }
        currentSpeed += 20;
        cout << brand << " " << model << " : Accelerating to " << currentSpeed << " km/h" << endl;
    }

    void brake() {
        currentSpeed -= 20;
        if (currentSpeed < 0) currentSpeed = 0;
        cout << brand << " " << model << " : Braking! Speed is now " << currentSpeed << " km/h" << endl;
    }

    void stopEngine() {
        isEngineOn = false;
        currentGear = 0;
        currentSpeed = 0;
        cout << brand << " " << model << " : Engine turned off." << endl;
    }

    ~SportsCar() {}
};

// Main Method
int main() {

    SportsCar* mySportsCar = new SportsCar("Ford", "Mustang");

    mySportsCar->startEngine();
    mySportsCar->shiftGear(1);
    mySportsCar->accelerate();
    mySportsCar->shiftGear(2);
    mySportsCar->accelerate();
    mySportsCar->brake();
    mySportsCar->stopEngine();

    // //Setting arbitrary value to speed.
    // mySportsCar->currentSpeed = 500;

    // cout << "Current Speed of My Sports Car is set to " << mySportsCar->currentSpeed << endl;

    cout << "Current Speed of My Sports Car is " << mySportsCar->getSpeed() << endl;

    delete mySportsCar;    

    return 0;
}