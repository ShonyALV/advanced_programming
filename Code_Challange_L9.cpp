// Task 1.1: Write a Simple Template Function
// Create a template function called maxValue that takes two arguments of the same type and returns the maximum value.
// Test the function with different types, including int, double, and std::string.

#include <iostream>
#include <concepts>

// using namespace std;

// template <typename T>
// T maxValue(T a, T b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int int1 = 10, int2 = 20;
//     double double1 = 10.5, double2 = 20.5;
//     string str1 = "apple", str2 = "banana";

//     cout << "Max of " << int1 << " and " << int2 << " is: " << maxValue(int1, int2) << endl;
//     cout << "Max of " << double1 << " and " << double2 << " is: " << maxValue(double1, double2) << endl;
//     cout << "Max of " << str1 << " and " << str2 << " is: " << maxValue(str1, str2) << endl;

//     return 0;
// }




// ✅ Task 1.2: Overload a Template Function
// Create an overloaded version of the maxValue template that takes three parameters.
// Test the function with integers and floating-point numbers.

// T maxValue(T a, T b, T c) {
//     return maxValue(maxValue(a, b), c);
// }

// int main() {
//     int int1 = 10, int2 = 20, int3 = 15;
//     double double1 = 10.5, double2 = 20.5, double3 = 15.5;

//     cout << "Max of " << int1 << ", " << int2 << ", and " << int3 << " is: " << maxValue(int1, int2, int3) << endl;
//     cout << "Max of " << double1 << ", " << double2 << ", and " << double3 << " is: " << maxValue(double1, double2, double3) << endl;

//     return 0;
// }




// ✅ Task 2.1: Create a Template with a Concept 
//1. Create a concept called Numeric that allows only integral or floating-point types. 
//2. Write a template function add that accepts two parameters constrained by the Numeric concept.

// template <typename T>
// concept Numeric = std::is_integral_v<T> || std::is_floating_point_v<T>;

// template <Numeric T>
// T add(T a, T b) {
//     return a + b;
// }

// int main() {
//     int int1 = 10, int2 = 20;
//     double double1 = 10.5, double2 = 20.5;

//     std::cout << "Sum of " << int1 << " and " << int2 << " is: " << add(int1, int2) << std::endl;
//     std::cout << "Sum of " << double1 << " and " << double2 << " is: " << add(double1, double2) << std::endl;

//     return 0;
// }




// ✅ Task 3.1: Write a Variadic Template Function
// 1.	Write a variadic template function called printAll that accepts any number of parameters and prints them separated by spaces.
// 2.	Test it with different types of arguments.

// template <typename T>
// void printAll(T arg) {
//     std::cout << arg << " ";
// }

// template <typename T, typename... Args>
// void printAll(T arg, Args... args) {
//     std::cout << arg << " ";
//     printAll(args...);
// }

// int main() {
//     printAll(1, 2.5, "Hello", 'A', 3.14);
//     std::cout << std::endl;

//     return 0;
// }




// ✅ Task 3.2: Variadic Template for Summation
// 1.	Write a variadic template function called sum that returns the sum of all arguments.
// 2.	Test it with integers and floating-point values.

// template <typename T>
// T sum(T arg) {
//     return arg;
// }

// template <typename T, typename... Args>
// T sum(T arg, Args... args) {
//     return arg + sum(args...);
// }

// int main() {
//     std::cout << "Sum of 1, 2, 3: " << sum(1, 2, 3) << std::endl; // Output: 6
//     std::cout << "Sum of 1.5, 2.5, 3.5: " << sum(1.5, 2.5, 3.5) << std::endl; // Output: 7.5

//     return 0;
// }




// ✅ Task 4.1: Compile-Time Factorial Using Templates
// 1.	Write a recursive template that calculates the factorial of a number at compile time using template metaprogramming.
// 2.	Test it with a constexpr value.

// template <int N>
// struct Factorial {
//     static const int value = N * Factorial<N - 1>::value;
// };

// template <>
// struct Factorial<0> {
//     static const int value = 1;
// };

// int main() {
//     constexpr int result = Factorial<5>::value; // 5! = 120
//     std::cout << "Factorial of 5 is: " << result << std::endl; // Output: 120

//     return 0;
// }




// ✅ Task 4.2: Fibonacci Series Using Template Metaprogramming
// 1.	Write a recursive template that calculates the nth Fibonacci number at compile time.
// 2.	Test it with constexpr values.

template <int N>
struct Fibonacci {
    static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <>
struct Fibonacci<0> {
    static const int value = 0;
};

template <>
struct Fibonacci<1> {
    static const int value = 1;
};

int main() {
    constexpr int result = Fibonacci<10>::value; // 10th Fibonacci number
    std::cout << "Fibonacci of 10 is: " << result << std::endl; // Output: 55

    return 0;
}