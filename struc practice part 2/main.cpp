#include <iostream>
#include <string>

using namespace std;
//you have been asked to design a structure to keep track of computers
//you need to keep track of the brand, RAM in GB, whether or not the computer is a laptop
//make two specific types pf computers (hard code the data):
//"Dell with 8 GB of RAM and is NOT a laptop"
//"Gateway 2000 with .125 GB of RAM and is a laptop"
//Print the two structures to the console.
struct person
{
    string name, address;
};
struct computer
{
    string brand;
    double ramInGb;
    bool laptop;
    person owner;
};
int main()
{
    computer a = {"Dell", 8, false};
    computer b;
    b.brand = "Gateway 2000";
    b.ramInGb = .125;
    b.laptop = true;
    b.owner.name = "George Smith";
    b.owner.address = "123 Fake Street";
    cout << a.brand << " RAM (GB): " << a.ramInGb << " 1 for laptop 0 not a laptop " << a.laptop << endl;
    cout << b.brand << " RAM (GB): " << b.ramInGb << " 1 for laptop 0 not a laptop " << b.laptop << endl;

    return 0;
}
