#include <iostream>
using namespace std;

int main() {

    // ================================
    // DATA STRUCTURES (ARRAYS)
    // ================================
    string name[100];
    int price[100], stock[100];
    int sold[100], revenue[100];

    int n = 0;

    // Initialize tracking arrays
    for(int i = 0; i < 100; i++) {
        sold[i] = 0;
        revenue[i] = 0;
    }

    // ================================
    // USER LOGIN SYSTEM
    // ================================
    int role;

    cout << "===== CLOTHING BRAND SYSTEM =====\n";
    cout << "Select User Role:\n";
    cout << "1. Admin\n2. Manager\n3. Cashier\n";
    cout << "Enter role: ";
    cin >> role;

    int choice;

    do {

        // ================================
        // ADMIN PANEL
        // ================================
        if(role == 1) {

            cout << "\n===== ADMIN MENU =====\n";
            cout << "1. Add Product\n";
            cout << "2. View Products\n";
            cout << "3. Update Product\n";
            cout << "4. Delete Product\n";
            cout << "5. Search Product\n";
            cout << "6. Sort Products by Price\n";
            cout << "7. View Sales History\n";
            cout << "8. View Revenue Report\n";
            cout << "12. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            // CREATE PRODUCT
            if(choice == 1) {

                cout << "// Adding new product\n";

                cout << "Enter product name: ";
                cin >> name[n];

                cout << "Enter price: ";
                cin >> price[n];

                cout << "Enter stock: ";
                cin >> stock[n];

                n++;
            }

            // VIEW PRODUCTS
            else if(choice == 2) {

                cout << "// Product List\n";

                for(int i = 0; i < n; i++) {
                    cout << i + 1 << ". " << name[i]
                         << " | Price: " << price[i]
                         << " | Stock: " << stock[i] << endl;
                }
            }

            // UPDATE PRODUCT
            else if(choice == 3) {

                cout << "// Update Product\n";

                int id;
                cout << "Enter product number: ";
                cin >> id;

                if(id >= 1 && id <= n) {

                    cout << "Enter new price: ";
                    cin >> price[id - 1];

                    cout << "Enter new stock: ";
                    cin >> stock[id - 1];
                }
            }

            // DELETE PRODUCT
            else if(choice == 4) {

                cout << "// Delete Product\n";

                int id;
                cout << "Enter product number: ";
                cin >> id;

                if(id >= 1 && id <= n) {

                    for(int i = id - 1; i < n - 1; i++) {
                        name[i] = name[i + 1];
                        price[i] = price[i + 1];
                        stock[i] = stock[i + 1];
                        sold[i] = sold[i + 1];
                        revenue[i] = revenue[i + 1];
                    }

                    n--;
                }
            }

            // SEARCH PRODUCT
            else if(choice == 5) {

                cout << "// Search Product\n";

                string search;
                cout << "Enter product name: ";
                cin >> search;

                for(int i = 0; i < n; i++) {

                    if(name[i] == search) {
                        cout << "Found: " << name[i]
                             << " | Price: " << price[i]
                             << " | Stock: " << stock[i] << endl;
                    }
                }
            }

            // SORT PRODUCTS
            else if(choice == 6) {

                cout << "// Sorting Products by Price\n";

                int type;
                cout << "1. Low to High\n2. High to Low\n";
                cin >> type;

                for(int i = 0; i < n; i++) {
                    for(int j = i + 1; j < n; j++) {

                        if(type == 1 && price[i] > price[j]) {
                            swap(price[i], price[j]);
                            swap(name[i], name[j]);
                            swap(stock[i], stock[j]);
                        }

                        else if(type == 2 && price[i] < price[j]) {
                            swap(price[i], price[j]);
                            swap(name[i], name[j]);
                            swap(stock[i], stock[j]);
                        }
                    }
                }
            }

            // SALES HISTORY
            else if(choice == 7) {

                cout << "// Sales History\n";

                for(int i = 0; i < n; i++) {
                    cout << name[i] << " Sold: " << sold[i] << endl;
                }
            }

            // REVENUE REPORT
            else if(choice == 8) {

                cout << "// Revenue Report\n";

                for(int i = 0; i < n; i++) {
                    cout << name[i] << " Revenue: " << revenue[i] << endl;
                }
            }
        }

        // ================================
        // MANAGER PANEL
        // ================================
        else if(role == 2) {

            cout << "\n===== MANAGER MENU =====\n";
            cout << "1. View Products\n";
            cout << "2. Update Stock\n";
            cout << "3. Low Stock Alert\n";
            cout << "4. Revenue Report\n";
            cout << "12. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            if(choice == 1) {

                for(int i = 0; i < n; i++) {
                    cout << name[i]
                         << " | Price: " << price[i]
                         << " | Stock: " << stock[i] << endl;
                }
            }

            else if(choice == 2) {

                int id, add;

                cout << "Enter product number: ";
                cin >> id;

                cout << "Add stock: ";
                cin >> add;

                if(id >= 1 && id <= n) {
                    stock[id - 1] += add;
                }
            }

            else if(choice == 3) {

                cout << "// Low Stock Items\n";

                for(int i = 0; i < n; i++) {

                    if(stock[i] <= 5) {
                        cout << name[i] << " LOW STOCK!\n";
                    }
                }
            }

            else if(choice == 4) {

                cout << "// Revenue Report\n";

                for(int i = 0; i < n; i++) {
                    cout << name[i] << " Revenue: " << revenue[i] << endl;
                }
            }
        }

        // ================================
        // CASHIER PANEL
        // ================================
        else if(role == 3) {

            cout << "\n===== CASHIER MENU =====\n";
            cout << "1. View Products\n";
            cout << "2. Sell Product\n";
            cout << "12. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            if(choice == 1) {

                for(int i = 0; i < n; i++) {
                    cout << name[i]
                         << " | Price: " << price[i]
                         << " | Stock: " << stock[i] << endl;
                }
            }

            else if(choice == 2) {

                int id, qty;

                cout << "Enter product number: ";
                cin >> id;

                cout << "Enter quantity: ";
                cin >> qty;

                if(id >= 1 && id <= n) {

                    if(stock[id - 1] >= qty) {

                        int total = price[id - 1] * qty;

                        stock[id - 1] -= qty;
                        sold[id - 1] += qty;
                        revenue[id - 1] += total;

                        cout << "Total Bill = " << total << endl;
                    }
                    else {
                        cout << "Not enough stock!\n";
                    }
                }
            }
        }

    } while(choice != 12);

    return 0;
}