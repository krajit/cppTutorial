#include "fvCFD.H"
#include "animal.H"
#include "cow.H"

/* TODO:

- create cow.H
- create cow.C
- add cow.C in make/files
- compile

*/

int main(int argc, char *argv[])
{

    cow   harry(10, 100, 15);
    cow   abcd(15,16,17,18);

    harry.moo();

    Info << harry.getMilk() << endl;

    return 0;
}

