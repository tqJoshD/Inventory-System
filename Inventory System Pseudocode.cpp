/*ADD NEW PRODUCT (product name, ID, category, quantity, price)  - 
UPDATE STOCK - 
SEARCH STOCK - 
DISPLAY ALL PRODUCTS - 
CALCULATE INVENTORY VALUE - 
DELETE PRODUCT - 
EXCEPTION HANDLING - 
EXIT SYSTEM - 
PPT - 
FLOWCHART - 
VIDEO TUTORIAL (10min) - 
SCREENSHOTS - */

#include <iostream>
#include <vector>
using namespace std;

class  Product{
    public:
        string productname;
        string producttype;
        int productsize;
        int productprize;
        int productquantity;
        int productnumber;  
    
    static int lastProductNumber;

    Product() {
        productnumber = ++lastProductNumber;  
    }    
            void setProductsAttribute(){
                cout << "\nEnter the name of the Product: ";
                cin >> productname;
                cout << "Enter the type of Product: ";
                cin >> producttype;
                cout << "Enter the product's size: ";
                cin >> productsize;
                cout << "Enter the product's price: ";
                cin >> productprize;
                cout << "Enter the available stock: ";
                cin >> productquantity;}
            
                void displayStock(){
                cout << "Product Name: " << product.productname;
                cout << "Product Number: "<< prooduct.productnumber;
                cout << "Available Stocks: " << product.productquantity;
            } 
            
            int displayProductNumber() {
                int total = 0;
                for (auto& product : inventory) {
                total += product.productprize * product.productquantity;
                }
                return total;
            
            friend ostream& operator<<(ostream& os, Product& product);

            
};

int displayTotalValue(){
    return product.productprize * product.productquantity;
            }

friend ostream& operator<<(ostream& os, const Product& product) {
    os << "Product Name: " << product.productname << "\nProduct Number: "<< product.productnumber <<"\nAvailable Stocks: " << product.productquantity << "\nProduct Prize: " << product.productprize;
    return os;
            };

int Product::lastProductNumber = 0;  

vector<Product> inventory;

void AddNewProduct(){
    Product product;
    product.setProductsAttribute();
    inventory.push_back(product);
    cout << "Product added successfully... \n Product Number: "<< product.displayProductNumber() <<"Returning to Main features.";
    return;
}

void SearchStock(){
    int productnum;
    bool findings = false;
    
    cout << "Enter product number: ";
    cin >> productnum;
     for (auto& product : inventory) {
        if (product.displayProductNumber() == productnum) {
            product.displayStock();
            findings = true;
            return;
        }
    }

    if (!findings) {
        cout << "Product not found.\n";
        return;
    }
}

void UpdateStock(){
    int productnum;
    bool findings = false;
    
    cout << "Enter product number: ";
    cin >> productnum;
     for (product : inventory) {
        if (product.displayProductNumber() == productnum) {
            product.displayStock();
            findings = true;
            break;
        }
    }

    if (findings) {
        cout << "Product not found.\n";
        break;
    }
}
}

void DisplayAllProduct(){
    for (auto& product : inventory) {
        cout << product;
}};

void CalculateInventoryValue(){
    cout << "The total value of the invebtory is: " << displayTotalValue();
}

void DeleteProduct(){
    int productnum;
    cout << "Enter product number to delete: ";
    cin >> productnum;

    for (auto it = inventory.begin();; it != inventory.end(); ++it) {
        if (it->displayProductNumber() == productnum) {
            inventory.erase(it);
            cout << "Product deleted.\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

int main(){
	int choicemain;
	while (true) {
		cout<< "\n------Tortilla WoodShop------\nGood Day, Welcome to 'Tortilla WoodShop' Inventory System! Please input the number for the features you choose:\n 1 - Add New Product\n 2 - Search Stock \n 3 - Update Stock \n 4 - Display All Products \n 5 - Calculate Inventry Value \n 6 - Delete Product \n 7 - Exit \nPlease enter number: ";
		cin >> choicemain;
		switch (choicemain) {
		case 1:
			AddNewProduct();
			break;
		case 2:
			SearchStock();
			break;
		case 3:
			UpdateStock();
			break;
		case 4:
			DisplayAllProduct();
			break;
		case 5:
		    CalculateInventoryValue();
		    break;
		case 6:
		    DeleteProduct();
		    break;
		case 7:
			cout << "Exiting program. Have a great day!\n" << endl;
			return 0;
			break;
		default:
		    cout << "Invalid choice! Please enter a number between 1 and 7:";
		}
	}
	return 0;
}