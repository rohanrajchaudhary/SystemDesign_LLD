HISTORY OF PROGRAMMING ? 

// The history of programming traces the evolution of instructions given to computers to perform tasks:

// Early Beginnings (1800s):

// Charles Babbage designed the Analytical Engine, and Ada Lovelace wrote the first algorithm for it, making her the first programmer.
// Mechanical and Electromechanical Era (1930s-1940s): HERE machine language was used for programming.

// Early computers like the ENIAC and Colossus were programmed using switches, plugboards, and punched cards.
// Assembly Language (1940s-1950s):

// Introduction of symbolic programming (assembly language) made programming less error-prone than raw machine code.
// High-Level Languages (1950s-1960s):

// FORTRAN (1957): First high-level language for scientific computing.
// COBOL (1959): Designed for business applications.
// LISP (1958): For artificial intelligence research.
// Structured Programming (1970s):

// Languages like C and Pascal promoted structured, modular code.
// Introduction of operating systems and compilers.
// Object-Oriented Programming (1980s):

// C++ and Smalltalk introduced object-oriented concepts, improving code reuse and organization.
// Internet and Scripting Languages (1990s):

// Java, Python, JavaScript, and PHP emerged, enabling web development and rapid prototyping.
// Modern Era (2000s-present):

// Growth of open-source, mobile, and cloud computing.
// Languages like Swift, Kotlin, Go, and Rust focus on safety, concurrency, and developer productivity.
// Summary:
// Programming has evolved from mechanical instructions to high-level, user-friendly languages, enabling the development of complex and scalable software systems.


WHY NEED OOPS ?

// Object-Oriented Programming (OOP) was introduced to address the limitations of procedural programming languages. Here’s why OOP became important:

// Better Code Organization: OOP organizes code around objects (real-world entities) rather than procedures, making complex programs easier to manage.
// Encapsulation: Data and functions are bundled together, protecting data from unintended access and modification.
// Reusability: OOP promotes code reuse through inheritance, allowing new classes to use features of existing ones.
// Maintainability: Changes in code are easier to manage because related data and behavior are grouped together.
// Abstraction: OOP allows you to hide complex implementation details and expose only what’s necessary.
// Polymorphism: Objects can be treated as instances of their parent class, making code more flexible and extensible.
// Summary:
// OOP was introduced to make software more modular, reusable, maintainable, and closer to real-world modeling than procedural programming.
// Actually oops helps to solve real world problems like we use objects in our day to day life and thats why we use objects in programming too. it has classes and objects which are used to represent real world entities.

WHY NEED CLASSES IN PROGRAMMING?

// Due to classes we can create objects and objects are used to represent real world entities.and we can too catch it as there behaviour , characteristics and properties.
// Example of a class in C++

// #include <iostream>
// using namespace std;

// // Define a class named 'Car'
// class Car {
// public:
//     // Attributes (data members)
//     string brand;
//     int year;

//     // Method (member function)
//     void displayInfo() {
//         cout << "Brand: " << brand << ", Year: " << year << endl;
//     }
// };

// int main() {
//     // Create an object of Car
//     Car myCar;
//     myCar.brand = "Toyota";
//     myCar.year = 2022;

//     // Call the method
//     myCar.displayInfo();

//     return 0;
// }

// In this example, the class 'Car' has attributes (brand and year) and a method (displayInfo) that displays the car's information. The object 'myCar' is created from the class, demonstrating how classes encapsulate data and behavior.
// if we have not the class method then we were not able to create objects and we were not able to represent real world entities in programming.

// Classes are essential for creating objects, which are instances of classes. Objects allow us to model real-world entities in programming, capturing their behavior, characteristics, and properties.
// OOP handles data security, data hiding, real-world modeling, and reusability.

PILLES OF OOP?
// The four pillars of Object-Oriented Programming (OOP) are:
// 1. Encapsulation:
//    - Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data into a single unit called a class.
//    - It restricts direct access to some of an object's components, which is a means of preventing unintended interference and misuse.
//    - Encapsulation allows for data hiding, meaning that the internal representation of an object is hidden from the outside.
//    - Example: In a class representing a bank account, the balance might be private, and access to it is controlled through public methods like deposit() and withdraw().
//
// 2. Abstraction:    
//    - Abstraction is the concept of hiding the complex reality while exposing only the necessary parts.
//    - It allows a programmer to focus on the essential features of an object without needing to understand all the details.
//    - Abstraction can be achieved through abstract classes and interfaces.
//    - Example: A car can be abstracted to have methods like start() and stop(), without needing to know how the engine works internally.

WHAT IS ACCESS MODIFIER?
// Access modifiers are keywords in object-oriented programming that set the accessibility of classes, methods, and other members. They control how the members of a class can be accessed from outside the class. The main access modifiers are:
// 1. Public:
//    - Members declared as public can be accessed from anywhere in the program.
//    - Example: public int age; // Accessible from anywhere
// 2. Private:
//    - Members declared as private can only be accessed within the class itself.
//    - They are not accessible from outside the class, which helps in data hiding.
//    - Example: private int balance; // Accessible only within the class
// 3. Protected:
//    - Members declared as protected can be accessed within the class and by derived classes (subclasses).
//    - They are not accessible from outside the class unless through inheritance.
//    - Example: protected string name; // Accessible within the class and derived classes


 Getter and Setter:
//    - Getter methods are used to retrieve the values of private attributes.
//    - Setter methods are used to set or modify the values of private attributes.
//    - They provide controlled access to the class's internal data, allowing you to enforce rules or perform additional operations when getting or setting values.
//    - Example:
//
//    class MyClass {
//    private:
//        int value;
//    public:
//        // Getter
//        int getValue() {
//            return value;
//        }
//        // Setter
//        void setValue(int newValue) {
//            if (newValue >= 0) {
//                value = newValue;
//            }
//        }
//    };
//
// In this example, the 'value' attribute is private, and its access is controlled through the 'getValue' and 'setValue' methods. The setter method includes a check to ensure that the new value is non-negative.

can we implement private access modifier ?
yes by help of getter and setter methods we can implement private access modifier.


NOTES : we write code like if for while and many things like this that is also the abstracted form of programming.here we dont need how it actually work with machine language.
as we know abstraction help to data hide only not provide security but in encapsulation we can hide data and provide security too.
and encapsulation means like a capsule which is used to hide the data and provide security.
