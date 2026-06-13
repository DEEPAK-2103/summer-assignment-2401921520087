#include "Veena.h"
#include "Saxophone.h"

int main()
{
    Veena v;
    Saxophone s;

    v.play();
    s.play();

    Playable *p;

    p = &v;
    p->play();

    p = &s;
    p->play();

    return 0;
}