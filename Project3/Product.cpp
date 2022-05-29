#pragma once
#include "Product.h"

using namespace std;

Product::Product() = default;
void Product::sort(vector<Product> &v1) {
    double max;
    for (int i = 0; i < v1.size(); i++)
    {
        max = i;
        for (int j = 0; j < v1.size(); j++)
        {
            if (v1[max].totalrate > v1[j].totalrate) {
                max = j;
                swap(v1[max], v1[i]);
            }
        }

    }
}

void Product::display(vector<Product> v1) {

    cout << "***" << endl;
    cout << "***" << endl;
    cout << " the product are ordered by its rate" << endl;
    sort(v1);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << "product id : " << v1[i].ID << endl;
        cout << "product name: " << v1[i].proName << endl;
        cout << "product price: " << v1[i].ProdPrice << endl;
        cout << "product categorey: " << v1[i].Category << endl;
        cout << "product quantity: " << v1[i].Quantity << endl;
        cout << "product rate: " << v1[i].totalrate << endl;
        cout << "seller id: " << v1[i].SellerID << endl;
        cout << "------------------------------------------" << endl;
    }
    cout << "***" << endl;
    cout << "***" << endl;
};
void Product::Entrate(Product prod, vector<Product> &v1) {
    cout << "please enter the id of the product" << endl;
    cin >> prod.ID;
    cout << endl;
    cout << "please enter the rate of the product" << endl;
    cout << "1)*       2)*       3)*       4)*         5)***" << endl;
    cin >> prod.rate;
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i].ID == prod.ID) {
            v1[i].total += prod.rate;
            v1[i].totalrate = v1[i].total / 5;

            cout << "ID: " << v1[i].ID << endl;
            cout << "proName: " << v1[i].proName << endl;
            cout << "ProdPrice: " << v1[i].ProdPrice << endl;
            cout << "Category: " << v1[i].Category << endl;
            cout << "Quantity: " << v1[i].Quantity << endl;
            cout << "product rate: " << v1[i].totalrate << endl;
            cout << "seller id: " << v1[i].SellerID << endl;
        }
    }
    int y;
    cout << "Choose '1' to rate another product or '2' to Exit" << endl;
    cin >> y;
    switch (y) {
    case 1:
        Entrate(prod, v1);
        break;
    case 2:
        break;
    }
}
Product::~Product(void)
{
}

;