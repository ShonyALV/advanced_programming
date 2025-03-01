#include <iostream>
#include <map>

void displayInventory(const std::map<std::string, int>& inventory) {
    std::cout << "\nCurrent Inventory:\n";
    for (const auto& item : inventory) {
        std::cout << item.first << ": " << item.second << " in stock\n";
    }
    std::cout << std::endl;
}


// void newProduct(std::map<std::string, >)



int main() {
    std::map<std::string, int> inventory;

    // Adding products
    inventory["Laptop"] = 5;
    inventory["Mouse"] = 20;
    inventory["Keyboard"] = 10;


    // Add a new product 
    char validar_new_product = 'Y';

    while(validar_new_product == 'Y') {
        std::cout << "Do u want to add a new product? (Y/N): ";
        std::cin >> validar_new_product;

        if(validar_new_product == 'Y'){
            std::string newKey;
            int numbers_of_newKey;

            std::cout << "Name of the product: ";
            std::cin >> newKey;
            std::cout << "How many of this product exist (quantity in inventory)?: ";
            std::cin >> numbers_of_newKey;

            inventory[newKey] = numbers_of_newKey;
        }
        else{
            break;
        }
    }


    // Update the quantity of an existing product
    char validar_update_inventory = 'Y';

    while (validar_update_inventory == 'Y') {
        std::cout << "Do u want to update the quantity of a product? (Y/N):";
        std::cin >> validar_update_inventory;

        if(validar_update_inventory == 'Y'){
            std::string product_upd;
            
            std::cout << "Wich product u want to update?: ";
            std::cin >> product_upd;

            if(inventory.count(product_upd)){
                int quantity_upd_product;

                std::cout << "New inventory of the product: ";
                std::cin >> quantity_upd_product;
                
                inventory[product_upd] = quantity_upd_product;
            }
            else{
                std::cout << product_upd << " is not in the inventory.";
            }
        }
        else{
            break;
        }
    }
    


    displayInventory(inventory);   // to show the inventory

    return 0;
}