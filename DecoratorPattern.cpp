#include <bits/stdc++.h>
using namespace std;

class Pizza
{
protected:
    string description = "";
    int cost = 0;

public:
    string getdescription()
    {
        return description;
    }
    int getcost()
    {
        return cost;
    }
};
// pizzas
class PeppyPaneer : public Pizza
{
public:
    PeppyPaneer()
    {
        cost = 100;
        description = description + " PeppyPaneer";
    }
};
class Magharita : public Pizza
{
public:
    Magharita()
    {
        cost = 200;
        description = description + " Magharita";
    }
};

// toppings
class Barbeque : public Pizza
{
public:
    Barbeque(Pizza *pizza)
    {
        cost = pizza->getcost() + 50;
        description = pizza->getdescription() + " Barbeque";
    }
};

class Paneer : public Pizza
{
public:
    Paneer(Pizza *pizza)
    {
        cost = pizza->getcost() + 60;
        description = pizza->getdescription() + " Paneer";
    }
};

int main()
{

    Pizza *pizza = new PeppyPaneer();
    cout << pizza->getcost() << " " << pizza->getdescription() << "\n";

    pizza = new Barbeque(pizza);
    cout << pizza->getcost() << " " << pizza->getdescription() << "\n";

    pizza = new Paneer(pizza);
    cout << pizza->getcost() << " " << pizza->getdescription() << "\n";

    return 0;
}