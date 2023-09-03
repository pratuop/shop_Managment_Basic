#include <iostream>
#include <cstdlib>
using namespace std;
string prod_name[5];
double price[5];
string customer_name;
long long int num;

class shop
{

    string name;
    // string prod_name[5];
    //	double price[5];
    int i;

public:
    void useradd()
    {int i, prodcount;
        char c;

        cout << "\nDo you want to add new product(Y/N): ";
        cin >> c;
        for (i = 0; i < prodcount; i++)
        {
            if (c == 'Y' or c == 'y')
            {
                cout << "Enter product name: ";
                cin >> prod_name[i];
                cout << "Product price: ";
                cin >> price[i];
                cout << "\n\nDo you want to add new product(Y/N): ";
                cin >> c;
            }
            else
            {
                exit;
            }
        }
    }
    void addData()
    {
        cout << "Enter customer name: ";
        cin >> customer_name;
       cout<<"Enter Your Number";
       cin>>num;
    }
    void displayBill()
    {
        int i, prodcount = 0;
        double totalAmount = 0;
        system("cls");
        cout<<"Customer Bill"<<endl;
        cout<<"======================="<<endl;
        cout << "Customer Name: " << customer_name << endl;
        cout<<"Customer Mobile Number"<<num<<endl;
        cout << "Products purchased:" << endl;
        for (i = 0; i < 5; i++)
        {
            if(prod_name[i].empty()){
                exit;
            }
            else{
            cout << prod_name[i] << "     "
                 << "Amt = RS. " << price[i] << endl;
            totalAmount += price[i];
            }
        }
        
        cout << "Total amount: Rs. " << totalAmount << endl;
    }
    /*	static void printcount(shop s)
        {
            cout<<"Customer Name: "<<s.name;
            cout<<"Product Name: "<<s.prod_name;
            cout<<"Product Price: "<<s.price;
            cout<<"Total number of Product count: "<<s.
        }*/
};

int main()
{

    
    
    //	string prod_name;
    shop s;
    // s.addData(prod_name, price);
    s.addData();
    s.useradd();
    s.displayBill();
}