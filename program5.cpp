#include<iostream>
using namespace std;    

class Thermostat
{

    string roomName;
    double temperature;
    

    public:
    Thermostat (string name, double temp)
    {
        roomName = name;
        temperature = temp;
    }

    Thermostat (const Thermostat &t)
    {
        roomName = "Dinning Room";
        temperature = t.temperature;
        
    }

    void display()
    {
        cout << "Room Name: " << roomName << endl;
        cout << "Temperature: " << temperature << endl;
    }
};


int main ()
{
    Thermostat thermostat1("Living Room", 22.5);
    thermostat1.display();

    Thermostat thermostat2(thermostat1);
    thermostat2.display();

    return 0;
}
