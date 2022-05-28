#pragma once

#include"Product.h"


using namespace std;

class Seller
{
public:
    int SellerId;
    string SellerName;
    string SellerEmail;

    Seller();

    bool chekProduct(int id, vector<Product> v1);
    void AddProduct(Product, vector<Product>& v1);
    void readdata(Product, vector<Product> &v1);
    ~Seller(void);

};
static Seller S;