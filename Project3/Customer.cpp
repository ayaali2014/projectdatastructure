#pragma once
#include "Customer.h"
#include<iostream>

using namespace std;
static bool flag = false;
static long  totalpricefinal = 0;
static string name;
void to_upper() {
    size_t findCaseInsensitive(string name, string toSearch, long pos = 0); {
        transform(name.begin(), name.end(), name.begin(), ::toupper);
    }
}
struct Cart {
    vector<Product>v2;
    double price;
};
Customer::Customer() = default;
void Customer::BrowseprodByCategory(vector<Product> v1) {
    int num;
    cout << "Please enter number of categorey which you want: \n";
    cout << " 1-Mobile\n 2-Clothes\n 3-Labtobs\n 4-Cars\n";
    cin >> num;
    // sort(prod); 
    switch (num)
    {
    case 1:
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i].Category == "Mobile") {
                cout << "ID: " << v1[i].ID << endl;
                cout << "proName: " << v1[i].proName << endl;
                cout << "ProdPrice: " << v1[i].ProdPrice << endl;
                cout << "Quantity: " << v1[i].Quantity << endl;
                cout << "rate: " << v1[i].totalrate << endl;
                cout << "**" << endl;
            }
        }
        break;
    case 2:
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i].Category == "Clothes") {
                cout << "ID: " << v1[i].ID << endl;
                cout << "proName: " << v1[i].proName << endl;
                cout << "ProdPrice: " << v1[i].ProdPrice << endl;
                cout << "Quantity: " << v1[i].Quantity << endl;
                cout << "rate: " << v1[i].totalrate << endl;
                cout << "**" << endl;
            }
        }
        break;
    case 3:
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i].Category == "Labtobs") {
                cout << "ID: " << v1[i].ID << endl;
                cout << "proName: " << v1[i].proName << endl;
                cout << "ProdPrice: " << v1[i].ProdPrice << endl;
                cout << "Quantity: " << v1[i].Quantity << endl;
                cout << "rate: " << v1[i].totalrate << endl;
                cout << "**" << endl;
            }
        }
        break;
    case 4:
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i].Category == "Cars") {
                cout << "ID: " << v1[i].ID << endl;
                cout << "proName: " << v1[i].proName << endl;
                cout << "ProdPrice: " << v1[i].ProdPrice << endl;
                cout << "Quantity: " << v1[i].Quantity << endl;
                cout << "rate: " << v1[i].totalrate << endl;
                cout << "**" << endl;
            }
        }
        break;
    default:
        cout << "Your Information incorrect..\n Please try again\n";
        break;
    }
};

void Customer::BrowseprodByName(Product prod, vector<Product>&v1) {

    cout << "Enter Name Of Product: \n";
    cin >> name;
    to_upper();

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i].proName == name)
        {
            cout << "ID: " << v1[i].ID << endl;
            cout << "proName: " << v1[i].proName << endl;
            cout << "ProdPrice: " << v1[i].ProdPrice << endl;
            cout << "Category: " << v1[i].Category << endl;
            cout << "Quantity: " << v1[i].Quantity << endl;
            flag = false;
        }
    }
    if (flag == true) {
        cout << "Sorry, unavialable product \n";
        BrowseprodByName(prod, v1);
    }
};

void Customer::AddProductToCart(vector<Product> v1) {
    Cart car;
    string n;
    int id, quantity;
    int choice;
    Product prod;
    long tprice, TOTAL;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "please enter \"1\" to browse by name or \"2\" to browse by category" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "the available products \n";
        cout << "----------------------------------------------\n";
        for (size_t i = 0; i < v1.size(); i++)
        {
            cout << v1[i].proName << endl;

        }
        BrowseprodByName(prod, v1);

        cout << "------------------------------------------------------------" << endl;
        cout << "please enter the name of product again to confirm \n";
        cout << "------------------------------------------------------------" << endl;
        cin >> name;
        to_upper();
        for (size_t i = 0; i < v1.size(); i++)
        {
            if (name == v1[i].proName) {
                cout << "the price:" << v1[i].ProdPrice << "\n" << "the available quantity:" << v1[i].Quantity << endl;
                cout << "__" << endl;
                cout << "enter the quantity which you need " << endl;
                cin >> quantity;
                if (v1[i].Quantity >= quantity) {
                    car.v2.push_back(v1[i]);
                    v1[i].Quantity = v1[i].Quantity - quantity;
                    TOTAL = quantity * v1[i].ProdPrice;
                    totalpricefinal = TOTAL + totalpricefinal;
                    cout << "----------------------------------------------\n";
                    cout << "Total price  " << TOTAL << "\n";
                    cout << "----------------------------------------------\n";


                    cout << "the remaining quantity :" << v1[i].Quantity << "\n";
                    /*cout << v1.size() << endl; */
                    cout << "--------------------------------------\n";


                    cout << "the product added successfully " << endl;
                    cout << "--------------------------------------\n";
                    flag = false;
                    break;
                }
                else {
                    cout << "sorry, you cannt add product this quantity is unavailable " << endl;
                    cout << "available quantity :" << v1[i].Quantity;
                    AddProductToCart(v1);
                }
            }
        }
        if (flag == true) {
            cout << "**" << endl;
            cout << "not match, please enter right name " << endl;
            cout << "**" << endl;

            cout << "------------------------------------------------------------" << endl;
            cout << "please enter the name of product again to confirm \n";
            cout << "------------------------------------------------------------" << endl;
            cin >> name;

            for (size_t i = 0; i < v1.size(); i++)
            {
                if (name == v1[i].proName) {
                    cout << "the price:" << v1[i].ProdPrice << "\n" << "the available quantity:" << v1[i].Quantity << endl;
                    cout << "__" << endl;
                    cout << "enter the quantity which you need " << endl;
                    cin >> quantity;
                    if (v1[i].Quantity >= quantity) {
                        car.v2.push_back(v1[i]);
                        v1[i].Quantity = v1[i].Quantity - quantity;
                        TOTAL = quantity * v1[i].ProdPrice;
                        totalpricefinal = TOTAL + totalpricefinal;
                        cout << "----------------------------------------------\n";
                        cout << "Total price  " << TOTAL << "\n";
                        cout << "----------------------------------------------\n";


                        cout << "the remaining quantity :" << v1[i].Quantity << "\n";
                        /*cout << v1.size() << endl; */
                        cout << "--------------------------------------\n";


                        cout << "the product added successfully " << endl;
                        cout << "--------------------------------------\n";
                        flag = false;
                        break;
                    }
                    else {
                        cout << "sorry, you cannt add product this quantity is unavailable " << endl;
                        cout << "available quantity :" << v1[i].Quantity;
                        AddProductToCart(v1);
                    }
                }
            }
            break;
        }

        break;

    case 2:
        BrowseprodByCategory(v1);

        cout << "**" << endl;
        cout << "enter the name of product " << endl;
        cin >> name;
        to_upper();
        cout << "enter the product id " << endl;
        cin >> id;

        for (size_t i = 0; i < v1.size(); i++)
        {
            if (name == v1[i].proName && id == v1[i].ID) {
                cout << "the price:" << v1[i].ProdPrice << "\n" << "the available quantity:" << v1[i].Quantity << endl;
                cout << "__" << endl;
                cout << "enter the quantity which you need " << endl;
                cin >> quantity;
                if (v1[i].Quantity >= quantity) {
                    car.v2.push_back(v1[i]);
                    v1[i].Quantity = v1[i].Quantity - quantity;
                    TOTAL = quantity * v1[i].ProdPrice;
                    totalpricefinal = TOTAL + totalpricefinal;
                    cout << "----------------------------------------------\n";
                    cout << "Total price  " << TOTAL << "\n";
                    cout << "----------------------------------------------\n";


                    cout << "the remaining quantity :" << v1[i].Quantity << "\n";
                    /*cout << v1.size() << endl; */
                    cout << "--------------------------------------\n";


                    cout << "the product added successfully " << endl;
                    cout << "--------------------------------------\n";
                    flag = false;
                    break;
                }
                else {
                    cout << "sorry, you cannt add product this quantity is unavailable " << endl;
                    cout << "available quantity :" << v1[i].Quantity;
                    AddProductToCart(v1);
                }
            }
            /*else{
                cout << "this product unaviable" << endl;
                break;
            }*/
        }break;
    default:
        cout << "wrong choice " << endl;
        cout << "please enter \"1\" to browse by name or \"2\" to browse by category" << endl;
        break;
    }
    int c;
    cout << "----------------------------------------------\n";
    cout << "Total final price of your product :  " << totalpricefinal << "\n";
    cout << "----------------------------------------------\n";
    cout << "if you wanna add another product enter \"1\" \n";
    cout << "enter \"2\" to exit \n";
    cin >> c;
    switch (c) {
    case 1:
        AddProductToCart(v1);
        break;
    case 2:
        cout << "*\n";
        cout << "thanks for choosing our app \n";
        cout << "*\n";
        break;
    defult:
        cout << "sorry, please enter 1 to add product or 2 to exit \n";
    }
}
Customer::~Customer(void)
{
}

;