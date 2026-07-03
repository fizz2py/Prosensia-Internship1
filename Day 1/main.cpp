#include <iostream>
#include <memory>

using namespace std;

// class representing a laptop
class Laptop
{
private:
    string brand;
    int ram;
    bool powerStatus;

public:
    // constructor
    Laptop(string b, int r)
    {
        brand = b;
        ram = r;
        powerStatus = false;
    }

    // turning the laptop on
    void powerOn()
    {
        powerStatus = true;
        cout << brand << " has been powered on." << endl;
    }

    // install software if the laptop is on
    void installSoftware(string software)
    {
        if (powerStatus)
        {
            cout << software << " installed successfully." << endl;
        }
        else
        {
            cout << "Please power on the laptop first." << endl;
        }
    }

    // upgrading the RAM
    void upgradeRam(int extraRam)
    {
        ram += extraRam;
        cout << "RAM upgraded by " << extraRam << " GB." << endl;
    }

    // display laptop information
    void displayInfo()
    {
        cout << "\nLaptop Details" << endl;
        cout << "--------------" << endl;
        cout << "Brand : " << brand << endl;
        cout << "RAM   : " << ram << " GB" << endl;
        cout << "Status: " << (powerStatus ? "On" : "Off") << endl;
    }
};

int main()
{
    // stack object
    Laptop officeLaptop("HP", 16);

    cout << "=== Stack Object ===" << endl;
    officeLaptop.displayInfo();
    officeLaptop.powerOn();
    officeLaptop.installSoftware("Visual Studio Code");
    officeLaptop.upgradeRam(8);
    officeLaptop.displayInfo();

    cout << endl;

    // heap object managed by a smart pointer
    unique_ptr<Laptop> gamingLaptop = make_unique<Laptop>("Dell XPS", 32);

    cout << "=== Heap Object ===" << endl;
    gamingLaptop->displayInfo();
    gamingLaptop->powerOn();
    gamingLaptop->installSoftware("Steam");
    gamingLaptop->upgradeRam(16);
    gamingLaptop->displayInfo();

    return 0;
}