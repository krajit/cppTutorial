#include "fvCFD.H"

int main(int argc, char *argv[])
{
    // references

    label x = 2;

    label & y = x;
    label  z = x;

    x++;

    Info << "x = " << x << endl;
    Info << "y = " << y << endl;
    Info << "z = " << z << endl;

    // similarly 

    scalar a = 2.5;

    // create a new object b referencing to a
    scalar &b = a;

    // make some changes to a
    b =  2*a;

    // print out a and b
    Info << "a = " << a << endl;
    Info << "b = " << b << endl;


    










    return 0;
}

