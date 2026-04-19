#include <iostream>
using namespace std;

class Attendee
{
private:
    string attendee_name;
    string attendee_email;
    int attendee_birth_date;

    void Set_attendee_name(string a_name)
    {
        attendee_name = a_name;
    };

    void Set_attendee_email(string a_email)
    {
        attendee_email = a_email;
    };

    void Set_attendee_birth_date(int a_birth_date)
    {
        attendee_birth_date = a_birth_date;
    };

protected:
    virtual const char* attendee_type() = 0;

public:
    void Set_attendee(string a_name,string a_email,int a_birth_date)
    {
        Set_attendee_name(a_name);
        Set_attendee_email(a_email);
        Set_attendee_birth_date(a_birth_date);
    };

    string Get_attendee_name()
    {
        return attendee_name;
    };

    string Get_attendee_email()
    {
        return attendee_email;
    };

    int Get_attendee_birth_date()
    {
        return attendee_birth_date;
    };


    void attendee_data()
    {
        cout << "Attendee data:" << endl;
        cout << Get_attendee_name() << endl;
        cout << Get_attendee_email() << endl;
        cout << Get_attendee_birth_date() << endl;
        cout << attendee_type() << endl;
    };
};

class VIP_Attendee : public Attendee
{
protected:
    virtual const char* attendee_type()
    {
        return "VIP";
    };
};

class Premium_Attendee : public Attendee
{
protected:
    virtual const char* attendee_type()
    {
        return "Premium";
    };
};