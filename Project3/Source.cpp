#pragma once
#include <fstream>


#include"Seller.h"
#include"Customer.h"

using namespace std;
static vector<Product> v1;
static Customer C;
static Product prod;
static bool isInitialized = false;
bool LoggedInSeller()
{
	string un, em;
	int id;
	cout << "Enter Id : ";
	cin >> S.SellerId;
	cout << "Enter Username : ";
	cin >> S.SellerName;
	cout << "Enter Email : ";
	cin >> S.SellerEmail;

	ifstream read("D:\\" + S.SellerName + ".txt");
	while (read >> id >> un >> em)
	{
		//cout << S.SellerId <<endl << S.SellerName <<endl << S.SellerEmail << endl;
	}
	if (id == S.SellerId && un == S.SellerName && em == S.SellerEmail)
	{
		cout << "\n" << "* Hello " << S.SellerName << " *" "\n";
		return true;
	}
	else
	{
		return false;
	}
}
bool LoggedInCustomer()
{
	string un, add, em;
	int id, ph;
	cout << "Enter Id : ";
	cin >> C.CustomerId;
	cout << "Enter Username : ";
	cin >> C.CustomerName;
	cout << "Select Your Address : ";
	cin >> C.CustomerAddress;
	cout << "Select Your PhoneNum : ";
	cin >> C.PhoneNumber;
	cout << "Enter Email : ";
	cin >> C.CustomerEmail;

	ifstream read("D:\\" + C.CustomerName + ".txt");
	while (read >> id >> un >> add >> ph >> em)
	{
		//cout << S.SellerId <<endl << S.SellerName <<endl << S.SellerEmail << endl;
	}
	if (id == C.CustomerId && un == C.CustomerName && ph == C.PhoneNumber && em == C.CustomerEmail && add == C.CustomerAddress)
	{
		cout << "\n" << "* Hello " << C.CustomerName << " *" "\n";
		return true;
	}
	else
	{
		return false;
	}
};

void init() {
	if (!isInitialized) {
		prod.ID = 1;
		prod.proName = "IPHONE";
		prod.ProdPrice = 20000;
		prod.Category = "Mobile";
		prod.Quantity = 30;
		prod.total = 20;
		prod.totalrate = 4;
		prod.SellerID = 11;


		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 2;
		prod.proName = "OPPO";
		prod.ProdPrice = 8000;
		prod.Category = "Mobile";
		prod.Quantity = 40;
		prod.total = 8;
		prod.totalrate = 1.6;
		prod.SellerID = 11;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 3;
		prod.proName = "HUAWEI";
		prod.ProdPrice = 7000;
		prod.Category = "Mobile";
		prod.Quantity = 20;
		prod.total = 15;
		prod.totalrate = 3;
		prod.SellerID = 11;
		v1.push_back(prod);
		//cout << p1.size();
		///////// Category2


		prod.ID = 4;
		prod.proName = "TROUSER";
		prod.ProdPrice = 500;
		prod.Category = "Clothes";
		prod.Quantity = 20;
		prod.total = 9;
		prod.totalrate = 1.8;
		prod.SellerID = 22;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 5;
		prod.proName = "DRESS";
		prod.ProdPrice = 800;
		prod.Category = "Clothes";
		prod.Quantity = 10;
		prod.total = 18;
		prod.totalrate = 3.6;
		prod.SellerID = 22;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 6;
		prod.proName = "SHIRT";
		prod.ProdPrice = 300;
		prod.Category = "Clothes";
		prod.Quantity = 15;
		prod.total = 21;
		prod.totalrate = 4.2;
		prod.SellerID = 22;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 7;
		prod.proName = "HAT";
		prod.ProdPrice = 100;
		prod.Category = "Clothes";
		prod.Quantity = 10;
		prod.total = 6;
		prod.totalrate = 1.2;
		prod.SellerID = 22;

		v1.push_back(prod);
		//cout << p1.size();

		///////// Category3

		prod.ID = 8;
		prod.proName = "LENOVO";
		prod.ProdPrice = 21000;
		prod.Category = "Labtobs";
		prod.Quantity = 10;
		prod.total = 11;
		prod.totalrate = 2.2;
		prod.SellerID = 33;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 9;
		prod.proName = "DELL";
		prod.ProdPrice = 19000;
		prod.Category = "Labtobs";
		prod.Quantity = 8;
		prod.total = 17;
		prod.totalrate = 3.4;
		prod.SellerID = 33;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 10;
		prod.proName = "TOSHIBA";
		prod.ProdPrice = 11000;
		prod.Category = "Labtobs";
		prod.Quantity = 5;
		prod.total = 22;
		prod.totalrate = 4.4;
		prod.SellerID = 33;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 11;
		prod.proName = "SAMSUNG";
		prod.ProdPrice = 12000;
		prod.Category = "Labtobs";
		prod.Quantity = 13;
		prod.total = 10;
		prod.totalrate = 2;
		prod.SellerID = 33;

		v1.push_back(prod);
		//cout << p1.size();

		///////// Category4

		prod.ID = 12;
		prod.proName = "BMW";
		prod.ProdPrice = 2000000;
		prod.Category = "Cars";
		prod.Quantity = 10;
		prod.total = 15;
		prod.totalrate = 3;
		prod.SellerID = 44;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 13;
		prod.proName = "HONDA";
		prod.ProdPrice = 250000;
		prod.Category = "Cars";
		prod.Quantity = 8;
		prod.total = 13;
		prod.totalrate = 2.6;
		prod.SellerID = 44;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 14;
		prod.proName = "FERARRI";
		prod.ProdPrice = 6000000;
		prod.Category = "Cars";
		prod.Quantity = 5;
		prod.total = 18;
		prod.totalrate = 3.6;
		prod.SellerID = 44;

		v1.push_back(prod);
		//cout << p1.size();

		prod.ID = 15;
		prod.proName = "JEEP";
		prod.ProdPrice = 700000;
		prod.Category = "Cars";
		prod.Quantity = 13;
		prod.total = 20;
		prod.totalrate = 4;
		prod.SellerID = 44;

		v1.push_back(prod);
		//cout << p1.size();

		isInitialized = true;
	}
}

int main() {

	init();

	cout << "\t\t\t____________________\n\n\n";
	cout << "\t\t\t       Welcome to Oneline Marketplace Management      \n\n\n";
	cout << "\t\t\t____________________\n\n\n";
	// Seller Or Customer
	int YourCh1, YourCh2;
	cout << "Who are you ? \n 1 - Seller ? \n 2 - Customer ? \n";
	cin >> YourCh1;

	// Login and Register
	int choice;
	cout << "\t| Press 1 to Register    | \n \t| Press 2 to Login       | \n\t Enter Your Chocie : \n";
	cin >> choice;

	if (choice == 1 && YourCh1 == 1)
	{
		string username, email;
		int id;
		cout << "Select Your Id : ";
		cin >> id;
		cout << "Select Your Username : ";
		cin >> username;
		cout << "Select Your Email : ";
		cin >> email;

		ofstream file;
		file.open("D:\\" + username + ".txt");
		file << id << endl << username << endl << email << endl;
		file.close();
		main();
	}
	else if (choice == 2 && YourCh1 == 1)
	{
		bool status = LoggedInSeller();
		if (!status)
		{
			cout << "False Login!! \n";
			cout << "Please try again. \n";
			main();
		}
		else
		{
			cout << "Succesfully Logged In.. \n";
			S.AddProduct(prod, v1);
			bool Switch = false;
			while (true) {
				int choice;
				cout << "****************\n";
				cout << "\t Press 1 to continue as a seller \t\n";
				cout << "\t Press 2 to switch to customer \t\n";
				cout << "\t Press 3 to Exit \t\n";
				cin >> choice;
				switch (choice)
				{
				case 1:
					S.AddProduct(prod, v1);
					break;
				case 2:
					main();
					break;
				case 3:
					return 0;
					break;
				default:
					cout << "Your Choice Incorrect.\n";
					break;
				}
			}
		}
	}
	else if (choice == 1 && YourCh1 == 2)
	{
		string username, email, address;
		int id, phoneNum;
		cout << "Select Your Id : ";
		cin >> id;
		cout << "Select Your Username : ";
		cin >> username;
		cout << "Select Your Address : ";
		cin >> address;
		cout << "Select Your PhoneNum : ";
		cin >> phoneNum;
		cout << "Select Your Email : ";
		cin >> email;

		ofstream file;
		file.open("D:\\" + username + ".txt");
		file << id << endl << username << endl << address << endl << phoneNum << endl << email << endl;
		file.close();
		main();
	}
	else if (choice == 2 && YourCh1 == 2)
	{
		bool status = LoggedInCustomer();
		if (!status)
		{
			cout << "False Login!! \n";
			cout << "Please try again. \n";
			main();

		}
		else
		{
			int choice;
			cout << "Succesfully Logged In.. \n";
			cout << "________________ \n";
			cout << "\t|    Press 1 to BrowseprodByCategory.     | \n ";
			cout << "\t|    Press 2 to BrowseprodByName.         | \n ";
			cout << "\t|    Press 3 to AddProductToCart.         | \n ";
			cout << "\t|    Press 4 to rate.                     | \n ";
			cout << "\t|    Press 5 to display products rate.    | \n ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				C.BrowseprodByCategory(v1);
				break;
			case 2:
				C.BrowseprodByName(prod, v1);
				break;
			case 3:
				C.AddProductToCart(v1);
				int a;
				cout << "To rate product choose '1' and To Exit choose '2'" << endl;
				cin >> a;
				switch (a)
				{
				case 1:
					prod.Entrate(prod, v1);
					break;
				case 2:
					return 0;
					break;
				}
				break;
			case 4:
				prod.Entrate(prod, v1);
				int b;
				cout << "To buy products choose '1' and To Exit choose '2'" << endl;
				cin >> b;
				switch (b)
				{
				case 1:
					C.AddProductToCart(v1);
					break;
				case 2:
					return 0;
					break;
				}
				break;
			case 5:
				prod.display(v1);
				break;
			default:
				cout << "Your Choice Incorrect.\n";
				break;
			}

			bool Switch = false;
			while (true) {
				int cho;
				cout << "****************\n";
				cout << "\t Press 1 to continue as a Customer \t\n";
				cout << "\t Press 2 to switch to Seller \t\n";
				cout << "\t Press 3 to Exit \t\n";
				cin >> cho;
				switch (cho)
				{
				case 1:
					cout << "\t|    Press 1 to BrowseprodByCategory.     | \n ";
					cout << "\t|    Press 2 to BrowseprodByName.         | \n ";
					cout << "\t|    Press 3 to AddProductToCart.         | \n ";
					cout << "\t|    Press 4 to rate.                     | \n ";
					cout << "\t|    Press 5 to display products rate.    | \n ";
					int choice;
					cin >> choice;
					switch (choice)
					{
					case 1:
						C.BrowseprodByCategory(v1);
						break;
					case 2:
						C.BrowseprodByName(prod, v1);
						break;
					case 3:
						C.AddProductToCart(v1);
						int a;
						cout << "To rate product choose '1' and To Exit choose '2'" << endl;
						cin >> a;
						switch (a)
						{
						case 1:
							prod.Entrate(prod, v1);
							break;
						case 2:
							return 0;
							break;
						}
						break;
					case 4:
						prod.Entrate(prod, v1);
						int b;
						cout << "To buy products choose '1' and To Exit choose '2'" << endl;
						cin >> b;
						switch (b)
						{
						case 1:
							C.AddProductToCart(v1);
							break;
						case 2:
							return 0;
							break;
						}
						break;
					case 5:
						prod.display(v1);
						break;
					default:
						cout << "Your Choice Incorrect.\n";
						break;
					}
					break;
				case 2:
					main();
					break;
				case 3:
					return 0;
					break;
				default:
					cout << "Your Choice Incorrect.\n";
					break;
				}
			}
		}
	}
	else {
		cout << "Error\n" << "Try again\n";
	}

	return 0;
}