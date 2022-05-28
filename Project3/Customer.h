#pragma once


#include <algorithm>
#include"Product.h"
using namespace std;
class Customer
{
public:
    int CustomerId;
    string CustomerName;
    string CustomerAddress;
    int PhoneNumber;
    string CustomerEmail;

    Customer();
    void BrowseprodByCategory(vector<Product> v1);
    void BrowseprodByName(Product, vector<Product>& v1);
    void AddProductToCart(vector<Product> v1);
    ~Customer(void);
};