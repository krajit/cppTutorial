#include "cow.H"

// constructor with three input
cow::cow(label inputAge, scalar inputWeight, scalar inputMilkProd)
:animal(inputAge,inputWeight)
{
    dailyMilkProd_ = inputMilkProd;
    height_ = 0.0;
}


// constructor with four input
cow::cow(label inputAge, scalar inputWeight, scalar inputMilkProd, scalar ht)
:animal(inputAge,inputWeight)
{
    dailyMilkProd_ = inputMilkProd;
    height_        = ht;
}


// public functions
scalar cow::getMilk()
{
    return dailyMilkProd_;
}

// cow says moo
void cow::moo()
{
    Info << "moo moo" << endl;

}
