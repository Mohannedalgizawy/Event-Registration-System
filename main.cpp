#include <iostream>
using namespace std;
#include "EventSystem.h"

int main()
{
    EventSystem e;
    int choice;
    cout << "Create an Event : 1." << endl;
    cout << "Display Events  : 2." << endl;
    cout << "Exit            : 3." << endl;
    cin >> choice;
    
    int num = 0; 
    while (true)
    {
        if (choice == 1)
        {
            cout << "pleace enter event type:" << endl;
            string event_type;
            cin >> event_type;

            cout << "pleace enter number of attndee:" << endl;
            int num_att;
            cin >> num_att;

            cout << "pleace enter event name:" << endl;
            string event_name;
            cin >> event_name;
            
            cout << "pleace enter event date:" << endl;
            string event_date;
            cin >> event_date;
            
            cout << "pleace enter Orgnizer name:" << endl;
            string O_name;
            cin >> O_name;
            
            cout << "pleace enter Orgnizer mail:" << endl;
            string O_mail;
            cin >> O_mail;

            cout << "pleace enter Orgnizer address:" << endl;
            string O_address;
            cin >> O_address;

            e.insert_in_first(num_att,event_name,event_date,O_name,O_mail,O_address,event_type);
            
        }else if (choice == 1 && num > 0)
        {
            cout << "pleace enter event type:" << endl;
            string event_type;
            cin >> event_type;

            cout << "pleace enter number of attndee:" << endl;
            int num_att;
            cin >> num_att;

            cout << "pleace enter event name:" << endl;
            string event_name;
            cin >> event_name;
            
            cout << "pleace enter event date:" << endl;
            string event_date;
            cin >> event_date;
            
            cout << "pleace enter Orgnizer name:" << endl;
            string O_name;
            cin >> O_name;
            
            cout << "pleace enter Orgnizer mail:" << endl;
            string O_mail;
            cin >> O_mail;

            cout << "pleace enter Orgnizer mail:" << endl;
            string O_address;
            cin >> O_address;
            
            e.append(num_att,event_name,event_date,O_name,O_mail,O_address,event_type);
        }else if (choice == 2)
        {
            e.display();
        }else
        {
            break;
        }
    
        num++;
    }
    
    return 0;
}
