#include <iostream>
#include <set>

int main() {
    std::set<std::string> productCategories;

    // Adding categories
    productCategories.insert("Electronics");
    productCategories.insert("Accessories");
    productCategories.insert("Peripherals");


    // Add a new category
    char validar = 'Y';

    while(validar == 'Y') {
        std::cout << "Do u want to add a new category? (Y/N): ";
        std::cin >> validar;

        if(validar == 'Y') {
            std::string new_category;
            
            std::cout << "Name of the new category (without space): ";
            std::cin >> new_category;

            productCategories.insert(new_category);
        }
        else {
            break;
        }
    }


    std::cout << "\nProduct Categories:\n";
    for (const auto& category : productCategories) {
        std::cout << "- " << category << "\n";
    }

    return 0;
}