
#include <bits/stdc++.h>
using namespace std;

class Product {
public:
    string code; 
    string name;
    int quantity;
    double price;

    Product() {}
    Product(string c, string n, int q, double p) {
        code = c;
        name = n;
        quantity = q;
        price = p;
    }
};

class StockManager {
private:
    vector<Product> products;

    bool codeExists(string code) {
        for (const auto& p : products) {
            if (p.code == code) return true;
        }
        return false;
    }

public:
    void addProduct() {
        string name;
        int qty;
        double price;
        string code;

        do {
            int randomNum = 1004 + rand() % 9000;
            code = to_string(randomNum);
        } while (codeExists(code));
        cin.ignore(); 
        cout << "Product Name: ";
        getline(cin, name);

        cout << "Quantity: ";
        cin >> qty;

        cout << "Price: $";
        cin >> price;
        std::cout << "Product code : " << code << endl; 
        products.push_back(Product(code, name, qty, price));

        cout << "Product Added Successfully!\n";
    }

    void removeProduct() {
        string code;
        cout << "\nEnter Product Code: ";
        cin >> code;

        for (auto it = products.begin(); it != products.end(); it++) {
            if (it->code == code) {
                products.erase(it);
                cout << "Product Removed!\n";
                return;
            }
        }
        cout << "Product Not Found!\n";
    }

    void restockProduct() {
        string code;
        int amount;

        cout << "\nEnter Product Code: ";
        cin >> code;

        for (auto& p : products) {
            if (p.code == code) {
                cout << "Add Quantity: ";
                cin >> amount;
                p.quantity += amount;
                cout << "Stock Updated!\n";
                return;
            }
        }
        cout << "Product Not Found!\n";
    }

    void sellProduct() {
        string code;
        int amount;

        cout << "\nEnter Product Code: ";
        cin >> code;

        for (auto& p : products) {
            if (p.code == code) {
                cout << "Quantity Sold: ";
                cin >> amount;

                if (amount > p.quantity) {
                    cout << "Not Enough Stock!\n";
                    return;
                }
                p.quantity -= amount;
                cout << "Sale Completed!\n";
                return;
            }
        }
        cout << "Product Not Found!\n";
    }

    void searchProduct() {
        string code;
        cout << "\nEnter Product Code to Search: ";
        cin >> code;

        for (auto& p : products) {
            if (p.code == code) {
                cout << "\n--- Product Found ---";
                cout << "\nCode: " << p.code;
                cout << "\nName: " << p.name;
                cout << "\nQuantity: " << p.quantity;
                cout << "\nPrice: $" << fixed << setprecision(2) << p.price << endl;
                return;
            }
        }
        cout << "Product Not Found!\n";
    }

    void listProducts() {
        if (products.empty()) {
            cout << "\nNo Products Available.\n";
            return;
        }

        cout << "\n" << left
            << setw(19) << "Code"
            << setw(29) << "Name"
            << setw(19) << "Quantity"
            << setw(19) << "Price" << endl;
        cout << string(77, '-') << endl;

        int totalQuantity = 0;
        double totalValue = 0.0;

        for (auto& p : products) {
            cout << left
                << setw(19) << p.code
                << setw(29) << p.name
                << setw(19) << p.quantity
                << "$" << fixed << setprecision(2) << p.price << endl;

            totalQuantity += p.quantity;
            totalValue += (p.quantity * p.price);
        }

        cout << string(77, '-') << endl;
        cout << left
            << setw(48) << "TOTAL"
            << setw(19) << totalQuantity
            << "$" << fixed << setprecision(2) << totalValue << endl;
        cout << string(77, '-') << endl;
    }

    void saveFile() {
        ofstream file("stock.txt");
        for (auto& p : products) {
            file << p.code << "|" << p.name << "|" << p.quantity << "|" << p.price << endl;
        }
        file.close();
        cout << "Saved Successfully!\n";
    }

    void loadFile() {
        ifstream file("stock.txt");
        if (!file) {
            cout << "No save file found.\n";
            return;
        }

        products.clear();
        string code, name, qtyStr, priceStr;

        while (getline(file, code, '|') &&
            getline(file, name, '|') &&
            getline(file, qtyStr, '|') &&
            getline(file, priceStr)) {

            int qty = stoi(qtyStr);
            double price = stod(priceStr);
            products.push_back(Product(code, name, qty, price));
        }
        file.close();
        cout << "Loaded Successfully!\n";
    }
};

void menu() {
    cout << "\n========================================\n"
        << "         STOCK MANAGEMENT SYSTEM\n"
        << "========================================\n"
        << "1. Add Product       2. Remove Product\n"
        << "3. Restock Product   4. Sell Product\n"
        << "5. Search Product    6. List Products\n"
        << "7. Save To File      8. Load From File\n"
        << "9. Exit\n"
        << "========================================\n"
        << "Choice: ";
}

int main() {
    srand(time(NULL));

    StockManager sm;
    int choice;

    do {
        menu();
        if (!(cin >> choice)) {
            cout << "\nInvalid Input! Enter a number.\n";
            cin.clear();
            cin.ignore(10004, '\n');
            continue;
        }

        switch (choice) {
        case 1: sm.addProduct(); break;
        case 2: sm.removeProduct(); break;
        case 3: sm.restockProduct(); break;
        case 4: sm.sellProduct(); break;
        case 5: sm.searchProduct(); break;
        case 6: sm.listProducts(); break;
        case 7: sm.saveFile(); break;
        case 8: sm.loadFile(); break;
        case 9: cout << "\nGoodbye!\n"; break;
        default: cout << "\nInvalid Choice!\n";
        }
    } while (choice != 9);

    return 0;
}