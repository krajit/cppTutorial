#include "animal.H"

animal::animal()
{
    Info << "default constructor called" << endl;
    // default
    age_ = 5;
    weight_ = 10.0;
}

animal::animal(label inputAge, scalar inputWeight)
{

    Info << "second constructor called" << endl;
    age_ = inputAge;
    weight_ = inputWeight;
}

animal::animal(label inputAge) 
{
    Info << "one input constructor called" << endl;
    age_ = inputAge;
    weight_ = 100;
}


scalar animal::getWeight()
{
    return weight_;
}

label animal::getAge()
{
    return age_;
}
