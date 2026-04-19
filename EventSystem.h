#include <iostream>
using namespace std;
#include "Event.h"

class EventSystem
{
private:
    Event* head;
    void start_event()
    {
        head = NULL;
    };
public:
    void insert_in_first(int num_att,string event_name,string event_date,string O_name,string O_mail,string O_address,string event_type)
    {
        if (event_type == "Conference")
        {
            Event* newevent = new Conference;
            newevent->Set_number_of_attendee(num_att);
            newevent->Set_Event(event_name,event_date);
            newevent->Set_orgnizer(O_name,O_mail,O_address);
            newevent->Set_attendee_list();
            newevent->Next = NULL;
            head = newevent;
        }else if (event_type == "Workshop")
        {
            Event* newevent = new Workshop;
            newevent->Set_number_of_attendee(num_att);
            newevent->Set_Event(event_name,event_date);
            newevent->Set_orgnizer(O_name,O_mail,O_address);
            newevent->Set_attendee_list();
            newevent->Next = NULL;
            head = newevent;
        }
    };

    void append(int num_att,string event_name,string event_date,string O_name,string O_mail,string O_address,string event_type)
    {
        Event* temp = head;
        if (event_type == "Conference")
        {
            while (temp->Next != NULL)
            {
                temp = temp->Next;
            }
            Event* newevent = new Conference;
            newevent->Set_number_of_attendee(num_att);
            newevent->Set_Event(event_name,event_date);
            newevent->Set_orgnizer(O_name,O_mail,O_address);
            newevent->Set_attendee_list();
            temp->Next = newevent;
            newevent->Next = NULL;
        }else if (event_type == "Workshop")
        {
            while (temp->Next != NULL)
            {
                temp = temp->Next;
            }
            Event* newevent = new Conference;
            newevent->Set_number_of_attendee(num_att);
            newevent->Set_Event(event_name,event_date);
            newevent->Set_orgnizer(O_name,O_mail,O_address);
            newevent->Set_attendee_list();
            temp->Next = newevent;
            newevent->Next = NULL;
        }
        
    };

    void display()
    {
        Event* temp = head;
        while (temp != NULL)
        {
            temp->event_data();
            temp->orgnizer_data();
            temp->Display_attendee_list();
            temp = temp->Next;
        }
    };
};
