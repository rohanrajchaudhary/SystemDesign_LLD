//  3. Inheritance:   
//    - Inheritance is a mechanism where a new class (child or derived class) inherits attributes and methods from an existing class (parent or base class).
//    - It promotes code reusability and establishes a relationship between classes.
//    - The derived class can add new features or override existing ones.
//    - Example: A class 'Animal' can be a base class, and 'Dog' and 'Cat' can be derived classes that inherit from 'Animal'.
// 4. Polymorphism:
//    - Polymorphism allows objects of different classes to be treated as objects of a common base class. 
//    - It enables a single interface to represent different underlying forms (data types).
//    - There are two types of polymorphism: compile-time (method overloading) and runtime (method overriding).
//    - Example: A function that takes a base class pointer can call derived class methods, allowing different behaviors based on the actual object type.
//
// In summary, these four pillars of OOP work together to create a robust and flexible programming paradigm that models real-world entities, promotes code reuse, and enhances maintainability.

DIFFERENCE BETWEEN STATIC AND DYNAMIC POLYMORPHISM?
Static polymorphism (compile-time) and dynamic polymorphism (runtime) differ in when the specific function call is determined.

Static Polymorphism (Compile-Time): This is achieved through method overloading and template functions. The compiler knows at compile time which function will be called based on the function signature (name and parameters). It's faster because the decision is made early, but less flexible as the behavior is fixed before execution.

Dynamic Polymorphism (Runtime): This is achieved through method overriding (using virtual functions in base classes). The specific function call is determined at runtime based on the actual object type. This allows for more flexibility, as the behavior can change during execution, but it introduces a slight performance overhead due to the runtime decision-making process.


// what is operator overloading?
// Operator overloading is a feature in C++ that allows you to redefine the way operators work for user-defined types (classes). It enables you to specify how operators like +, -, *, /, etc., behave when applied to objects of your class. This makes your classes more intuitive and easier to use, as you can use standard operators with your custom types.

// For example, if you have a class representing complex numbers, you can overload the + operator to add two complex numbers together using the standard syntax:
//
// ComplexNumber c1, c2;
// ComplexNumber c3 = c1 + c2; // This will call the overloaded + operator for ComplexNumber
// This makes the code more readable and allows you to use familiar operators with your custom types, enhancing the overall usability of your classes.


can we use operator overloading in java ? 
// No, Java does not support operator overloading. In Java, operators are predefined and cannot be redefined for user-defined types (classes). This design decision was made to keep the language simpler and more consistent. Instead of operator overloading, Java encourages the use of method calls to achieve similar functionality. For example, instead of overloading the + operator for a custom class, you would define a method like add() to perform the same operation.