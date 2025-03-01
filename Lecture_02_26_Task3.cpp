#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> orders;

    // Adding orders
    orders.push("Order#1: Laptop");
    orders.push("Order#2: Mouse");
    orders.push("Order#3: Keyboard");

    // Processing orders
    while (!orders.empty()) {
        std::cout << "Processing " << orders.front() << std::endl;
        orders.pop();
    }

    return 0;
}