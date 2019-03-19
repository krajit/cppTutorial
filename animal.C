class animal {
// private members
    label age_;
    scalar weight_;
// anything before public is private by default
public:
   //constructor
    animal()
    {

        Info << "default constructor called" << endl;

        // default
        age_ = 5;
        weight_ = 10.0;
    }

    animal(label inputAge, scalar inputWeight)
    {

      Info << "second constructor called" << endl;
        // default
        age_ = inputAge;
        weight_ = inputWeight;
    }

    animal(label inputAge) 
    {
        Info << "one input constructor called" << endl;
        age_ = inputAge;
        weight_ = 100;
    }


    scalar getWeight()
    {
        Info << "bye" << endl;

        return weight_, 34;


        return age_;
    }

    label getAge()
    {
        return age_;
    }
};
