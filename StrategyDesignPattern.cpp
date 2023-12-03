using namespace std;
#include <iostream>
#include <string>
using namespace std;

class drivestratergy
{
public:
    virtual void drive() = 0;
};

class normalDrive : public drivestratergy
{

public:
    void drive()
    {
        cout << "Normal drive" << endl;
    }
};

class SpecialDrive : public drivestratergy
{

public:
    void drive()
    {
        cout << "fast drive" << endl;
    }
};

class vehicle
{

private:
    drivestratergy *ds;

public:
    vehicle(drivestratergy *ds)
    {
        this->ds = ds;
    }

    void drive()
    {
        ds->drive();
    }
};

class sports : public vehicle
{

public:
    sports() : vehicle(new SpecialDrive())
    {
    }
};

class offroad : public vehicle
{

public:
    offroad() : vehicle(new SpecialDrive())
    {
    }
};

class passenger : public vehicle
{

public:
    passenger() : vehicle(new normalDrive())
    {
    }
};

int main(void)
{

    offroad off;
    off.drive();

    passenger pass;
    pass.drive();

    return 0;
}