#include <iostream>
#include <string>
using namespace std;

class Bus {
    public:
        string bus_name;
        string bus_number;
        string bus_destination;
        string reporting_time;
        string departure_time;
        int bus_fare;
        Bus(string bus_name,
        string bus_number,
        string bus_destination,
        string reporting_time,
        string departure_time,
        int bus_fare)
        {
            this->bus_name = bus_name;
            this->bus_number = bus_number;
            this->bus_destination = bus_destination;
            this->reporting_time = reporting_time;
            this->departure_time = departure_time;
            this->bus_fare = bus_fare;
        };
        void showInfo() {
            cout << "The name of the bus is: " << bus_name << endl;
            cout << "Bus number is: " << bus_number << endl;
            cout << "Bus destination: " << bus_destination << endl;
            cout << "Reporting time: " << reporting_time << endl;
            cout << "Departure time: " << departure_time << endl;
            cout << "Fare: " << bus_fare << endl;
        }
};

int main() {
    int busIndex;
    int memberCount;
    int endVar;
    cout << "Which place do u want to go?" << endl;
    cout << "1 Hyderabad" << endl;
    cout << "2 Bangalore" << endl;
    cout << "3 Mumbai" << endl;
    cout << "Enter the number (1 to 3): ";
    cin >> busIndex;
    if((!cin >> busIndex) || busIndex > 3 || busIndex < 1) {
        cout << "Invalid Selection!" << endl;
        goto end;
    }
    else {
        switch (busIndex) {
            case 1:
            {
                cout << "How many members: ";
                cin >> memberCount;
                Bus hyderabadBus = Bus("Hyderabad Express", "25", "Hyderabad", "10 PM", "10:15 PM", 1000*memberCount); //Bus to hyderabad
                hyderabadBus.showInfo();
                goto end;
            }
            case 2:
            {
                cout << "How many members: ";
                cin >> memberCount;
                Bus bangaloreBus = Bus("Bangalore Express", "23", "Bangalore", "5 PM", "5:15 PM", 800*memberCount); //Bus to bangalore
                bangaloreBus.showInfo();
                goto end;
            }
            case 3:
            {
                cout << "How many members: ";
                cin >> memberCount;
                Bus mumbaiBus = Bus("Mumbai Express", "22", "Mumbai", "2PM", "2:15 PM", 2000*memberCount); //Bus to mumbai
                mumbaiBus.showInfo();
                goto end;
            }
            default:
                goto end;
        }
    }
    end:
        cout << "Press Ctrl+C to exit" << endl;
        cin >> endVar;
}