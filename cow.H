// include protection
#ifndef cow_H
#define cow_H


// need to include this to declare label, scalar etc
#include "fvCFD.H"
#include "animal.H"

class cow 
    :public animal 
{
    // private members
    scalar dailyMilkProd_;
    scalar height_;

    public:

    // constructor with three input
    cow(label inputAge, scalar inputWeight, scalar inputMilkProd)
    :animal(inputAge,inputWeight)
    {
        dailyMilkProd_ = inputMilkProd;
    }

    // public functions
    scalar getMilk();

    // cow says moo
    void moo();



};

#endif
// end of include protection