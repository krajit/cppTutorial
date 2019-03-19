#include "fvCFD.H"

int main(int argc, char *argv[])
{

    animal tony(20,50.0); // age = 20, weight = 50

    animal sam(10); // age = 10, default weight = 100


    Info << sam.getWeight() << endl;
    Info << sam.getAge() << endl;



    return 0;
}

