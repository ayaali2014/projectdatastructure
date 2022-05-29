

#pragma once
#include <String>
#include<vector>
#include<iostream>

using namespace std;


class Product
{
public:
    int ID;
    string proName;
    int ProdPrice;
    string Category;
    int Quantity;
    int rate;
    double total;
    double totalrate;
    int SellerID;

    Product();
    void sort(vector<Product>& v1);
    void display(vector<Product>v1);
    void Entrate(Product, vector<Product>& v1);
    ~Product(void);
}; 
