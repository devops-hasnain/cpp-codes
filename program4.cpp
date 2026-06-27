#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product(string pName, double pPrice) {
        name = pName;
        price = pPrice;
    }

    void applyDiscount(double percentage) {
        price = price - (price * (percentage / 100.0));
    }

    void display() {
        cout << name << ": $" << price << endl;
    }
};

int main() {
    Product item1("Laptop", 1000.0);
    Product item2("Phone", 500.0);

    item1.applyDiscount(10);
    item1.display();
    item2.display();

    return 0;
}

//Output:
//Laptop: $900
//Phone: $500
