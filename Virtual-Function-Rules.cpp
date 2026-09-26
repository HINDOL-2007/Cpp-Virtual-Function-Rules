#include <iostream>
using namespace std;
class Weapon
{
public:
    virtual void attack()
    {
        cout << "Default Weapon Strike! ( 10 damage)" << endl;
    }
};
class Sword : public Weapon
{
public:
    void attack()
    {
        cout << "Heavy Sword Slash! ( 50 damage)" << endl;
    }
};
class Bow : public Weapon
{
    // write it for testing
    // public:
    //      void attack(){        
    //          cout<<"when it is here their generate a blank line"<<endl;
    //          }
};
int main()
{
    Weapon *armory[2];
    Sword s;
    Bow b;
    armory[0] = &s;
    armory[1] = &b;
    for (int i = 0; i < 2; i++)
    {
        armory[i]->attack();
        cout << endl;
    }
    return 0;
}
