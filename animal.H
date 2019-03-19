// include protection
#ifndef animal_H
#define animal_H


// need to include this to declare label, scalar etc
#include "fvCFD.H"

class animal {
// private members

    label age_;


    scalar weight_;

public:
   //constructors
    animal();
    animal(label inputAge, scalar inputWeight);
    animal(label inputAge);

    // members functions
    scalar getWeight();
    label getAge();
};

#endif
// end of include protection