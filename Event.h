#include <iostream>
using namespace std;
#include "Orgnizer.h"
#include "Attendee.h"

class Event
{
private:
    int number_of_attendee;
    string event_Name;
    string event_Date;
    Orgnizer* orgnizer = new Orgnizer;
    Attendee** attendee_list;

    void Set_event_Name(string e_name)
    {
        event_Name = e_name;
    };

    void Set_event_date(string e_date)
    {
        event_Date = e_date;
    };

protected:
    virtual const char* event_type() = 0;
public:

    void Set_number_of_attendee(int num_att)
    {
        number_of_attendee = num_att;
    };

    void Set_Event(string event_name,string event_date)
    {
        Set_event_Name(event_name);
        Set_event_date(event_date);
    };

    void Set_orgnizer(string O_name,string O_mail,string O_address)
    {
        orgnizer->Set_Orgnizer(O_name,O_mail,O_address);
    };

    void Set_attendee_list()
    {
        string a_name;
        string a_email;
        int a_birth_date;
        string attendee_type;

        attendee_list = new Attendee*[number_of_attendee];
        for (int i = 0; i < number_of_attendee; i++)
        {
            cout << "Attendee number:" << i+1 << "." << endl;

            cout << "pleace enter attendee type:" << endl;
            cin >> attendee_type;
            if (attendee_type == "VIP")
            {
                attendee_list[i] = new VIP_Attendee;
            }
            else if (attendee_type == "Premium")
            {
                attendee_list[i] = new Premium_Attendee;
            }
            
            cout << "pleace enter attendee name:" << endl;
            cin >> a_name;
            
            cout << "pleace enter attendee email:" << endl;
            cin >> a_email;

            cout << "pleace enter attendee birth date:" << endl;
            cin >> a_birth_date;

            cout << endl;

            attendee_list[i]->Set_attendee(a_name,a_email,a_birth_date);
            
        }
        
    };

    void event_data()
    {
        cout << "Event Data:" << endl;
        cout << event_type() << endl;
        cout << event_Name << endl;
        cout << event_Date << endl;
    };

    void orgnizer_data()
    {
        orgnizer->Orgnizer_Data();
    };

    void Display_attendee_list()
    {
        for (int i = 0; i < number_of_attendee; i++)
        {
            cout << "attndee number :" << i+1 << "." << endl;
            attendee_list[i]->attendee_data();
        }
        
    };

    Event* Next;
};

class Conference : public Event
{
    virtual const char* event_type()
    {
        return "Conference";
    };
};

class Workshop : public Event
{
    virtual const char* event_type()
    {
        return "Workshop";
    };
};
