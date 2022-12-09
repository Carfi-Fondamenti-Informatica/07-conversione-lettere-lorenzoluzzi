#include <iostream>
#include "lib.h"
using namespace std;

bool riconoscere(char o){
    if (o=='a' || o=='b'|| o=='c'|| o=='d'|| o=='e'|| o=='f'|| o=='g'|| o=='h'|| o=='i'|| o=='j'|| o=='k'|| o=='l'|| o=='m'|| o=='n'|| o=='o'|| o=='p'|| o=='q'|| o=='r'|| o=='s'|| o=='t'|| o=='u'|| o=='v'|| o=='w'|| o=='x'|| o=='y'|| o=='z'){
        return 0;
    }
    if (o=='A' || o=='B'|| o=='C'|| o=='D'|| o=='E'|| o=='F'|| o=='G'|| o=='H'|| o=='I'|| o=='J'|| o=='K'|| o=='L'|| o=='M'|| o=='N'|| o=='O'|| o=='P'|| o=='Q'|| o=='R'|| o=='S'|| o=='T'|| o=='U'|| o=='V'|| o=='W'|| o=='X'|| o=='Y'|| o=='Z'){
        return 0;
    }


    else{
        return 1;
    }

}
