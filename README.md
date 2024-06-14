# CPP Module 07

## Overview

The cpp-module-07 project from School 42 focuses on the advanced features of C++ templates, covering various aspects such as function templates, class templates, template specialization, and template metaprogramming. This module provides a comprehensive exploration of templates, their syntax, and practical applications in C++ programming.

## Table of Contents

- [CPP Module 07](#cpp-module-07)
	- [Overview](#overview)
	- [Table of Contents](#table-of-contents)
	- [Introduction to Templates](#introduction-to-templates)
		- [Key Concepts](#key-concepts)
	- [Function Templates](#function-templates)
		- [Syntax](#syntax)
	- [Example](#example)
	- [Class Templates](#class-templates)
		- [Syntax](#syntax-1)
	- [Example](#example-1)
	- [Template Specialization](#template-specialization)
		- [Example](#example-2)
	- [Template Metaprogramming](#template-metaprogramming)
	- [Resources](#resources)
	- [Conclusion](#conclusion)

## Introduction to Templates

Templates in C++ are a powerful feature that allows the creation of generic and reusable code components. They enable functions and classes to operate with any data type without being rewritten for each specific type.

### Key Concepts

- **Generic Programming**: Writing code that works with any data type.
- **Type Parameters**: Specifying types as parameters to functions or classes.
- **Code Reusability**: Reducing redundancy by creating flexible code.

## Function Templates

Function templates allow functions to operate with generic types. This is particularly useful for algorithms that can be applied to different data types.

### Syntax

```cpp
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
```

## Example

```cpp
int main() {
    int i = max(3, 7); // Works with int
    double d = max(3.0, 7.0); // Works with double
    std::string s = max(std::string("apple"), std::string("banana")); // Works with string
}
```

## Class Templates

Class templates enable the creation of classes that work with generic types. They are especially useful for data structures and container classes.

### Syntax

```cpp
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};
```

## Example

```cpp
int main() {
    Box<int> intBox(123); // Box of int
    Box<std::string> strBox("Hello"); // Box of string

    std::cout << intBox.getValue() << std::endl; // Outputs 123
    std::cout << strBox.getValue() << std::endl; // Outputs Hello
}
```

## Template Specialization

Template specialization allows for the creation of custom implementations for specific types. This is useful when the generic implementation does not suffice for certain types.
Syntax

```cpp
template <typename T>
class Container {
    T element;
public:
    Container(T elem) : element(elem) {}
    T getElement() { return element; }
};

// Specialization for int
template <>
class Container<int> {
    int element;
public:
    Container(int elem) : element(elem) {}
    int getElement() { return element * 2; } // Custom behavior for int
};
```

### Example

```cpp
int main() {
    Container<int> intContainer(10);
    Container<double> doubleContainer(10.5);

    std::cout << intContainer.getElement() << std::endl; // Outputs 20
    std::cout << doubleContainer.getElement() << std::endl; // Outputs 10.5
}
```

## Template Metaprogramming

Template metaprogramming is a technique in which templates are used to perform computations at compile time. This is an advanced topic that can optimize performance by shifting computations from runtime to compile time.
Example: Factorial Computation

```cpp
template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static const int value = 1;
};

int main() {
    std::cout << "Factorial of 5 is " << Factorial<5>::value << std::endl; // Outputs 120
}
```

## Resources

- C++ Documentation
- Effective Modern C++ by Scott Meyers
- C++ Templates: The Complete Guide by David Vandevoorde and Nicolai M. Josuttis
- School 42 Intranet

## Conclusion

C++ templates are a cornerstone of modern C++ programming, enabling the creation of highly reusable and efficient code. Mastering templates significantly enhances the ability to write flexible and robust C++ programs.

