#include "fvCFD.H"
#include "animal.H"
#include "cow.H"


int main(int argc, char *argv[])
{

    cow   harry(10, 100, 15);
    cow   abcd(15,16,17,18);


    Info << harry.getWeight() << endl;

    return 0;
}

