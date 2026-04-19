#include <iostream>
using namespace std;

class Orgnizer
{
private:
    string Orgnizer_name;
    string Orgnizer_mail;
    string Orgnizer_address;

    void Set_Orgnizer_name(string O_name)
    {
        Orgnizer_name = O_name;
    };

    void Set_Orgnizer_mail(string O_mail)
    {
        Orgnizer_mail = O_mail;
    };

    void Set_Orgnizer_address(string O_address)
    {
        Orgnizer_address = O_address;
    };
    
    string Get_Orgnizer_mail()
    {
        return Orgnizer_mail;
    };

    string Get_Orgnizer_address()
    {
        return Orgnizer_address;
    };
public:
    string Get_Orgnizer_name()
    {
        return Orgnizer_name;
    };

    void Set_Orgnizer(string O_name,string O_mail,string O_address)
    {
        Set_Orgnizer_name(O_name);
        Set_Orgnizer_mail(O_mail);
        Set_Orgnizer_address(O_address);
    };

    void Orgnizer_Data()
    {
        cout << "Orgnizer data:" << endl;
        cout << Get_Orgnizer_name() << endl;
        cout << Get_Orgnizer_mail() << endl;
        cout << Get_Orgnizer_address() << endl;
    };
};
