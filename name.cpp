#include <iostream>
#include <string>
using namespace std;

bool name_verification(string name_verify)
{
    bool name_verified = true;
    for(int counter = 0; counter < name_verify.length(); counter++)
    {
        if(name_verified == true && isdigit(name_verify[counter]) || ispunct(name_verify[counter] ))
        {
            name_verified = false;
        }
    }
    return name_verified;
}
bool is_name_even_or_odd(string test)
{
    bool is_even = true;
    if(test[0] % 2 == 0)
    {
        is_even = true;
    }
    else
    {
        is_even = false;
    }
    return is_even;
}

void name_is_even(string even_name)
{
    cout << "Your nickname is:\n";
    cout << "Big ";
    for (int counter_even = 0; counter_even < 3; counter_even++)
    {
        cout << even_name[counter_even];
    }
    cout << endl;
}

void name_is_odd(string odd_name)
{
    cout << "Your nickname is:\n";
    cout << "Lil ";
    for (int counter_odd = 0; counter_odd < 4; counter_odd++)
    {
        cout << odd_name[counter_odd];
    }
    cout << endl;
}

int main ()
{
    string name;
    cout << "Enter your first name\n";
    cin >> name;
    if(!name_verification(name))
    {
        cout << "Only letters are allowed.\n";
        return 0;
    }
    else
    {
        if(!is_name_even_or_odd(name))
            {
                name_is_even(name);
            }
        else if (is_name_even_or_odd(name))
            {
                name_is_odd(name);
            }
    }

    return 0;
}
