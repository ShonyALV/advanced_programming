#include <iostream>
#include <cmath>
#include <utility>
#include <string>

int main(){

    // Part 1:
    int a = 42.0;
    double b = 42.8;
    std::string c = "This is an string";
    bool d = true;

    std::cout << "Initial Values:" << std::endl;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "c= " << c << std::endl;
    std::cout << "d= " << d << std::endl;


    // Part 2:
    int& ref_a = a;
    ref_a = 7;
    double& ref_b = b;
    ref_b = 3.141592;
    std::string& ref_c = c;
    ref_c = "This is not a string (Kappa)";
    bool& ref_d = d;
    ref_d = false;

    std::cout << "\nModified Values:" << std::endl;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "c= " << c << std::endl;
    std::cout << "d= " << d << std::endl;


    // Part 3:
    struct RPG_champion {
        std::string name;
        int hp;
        int def;
    };
    RPG_champion valk = {"Valkyria", 55000, 6200};

    std::cout << "\nStructure:" << std::endl;




    // Part 4:
    /*
    1.	a = 42;                        <- a is l value
    2.	int x = a + b;                 <- x, a and b are l -alues, (a+b) are r-values
    3.	&a;                            <- l-value
    4.	std::string s = c + " World";  <- c is l-value, " World" and (c+" World") are r-value
    5.	int& refX = x;                 <- r-value
    6.	int&& rref = 100;              <- l-value
    */
    std::cout << "\nValue Categories:" << std::endl;
    std::cout << " 1.   a = 42;  <- a is l value\n 2.   int x = a + b;  <- x, a and b are l -alues, (a+b) are r-values\n 3. &a;  <- l-value\n 4.   std::string s = c + ' World';  <- c is l-value, ' World' and (c+' World') are r-value\n 5.   int& refX = x;  <- r-value\n 6. int&& rref = 100;  <- l-value\n" << std::endl;


    return 0;
}