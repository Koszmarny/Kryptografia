//
// Created by pawel on 02.06.2019.
//

#include "BBS.h"

using namespace std;
BBS::BBS() {
    //przykladowe dane
    this->p = 10;
    this->q = 16;

    //ziarno
    this->x0 = 5;

    this->n = p * q;
}

long int nwd(long int p, long int q) {
    if (q == 0) return p;
    else return nwd(q, fmod(p, q));
}

//p i q takie ze NWD(p,q)=1
void BBS::setParametry(long int p, long int q, long int ziarno) {
    this->p = p;
    this->q = q;
    this->x0=ziarno;
    this->n=p*q;
}

BBS::BBS(long int p, long int q, long int ziarno) {
    this->setParametry(p, q, ziarno);
}

long int BBS::getLosLiczbe() {
    long int nastLosLiczba = (this->x0 * this->x0) % this->n;
    this->x0 = nastLosLiczba;
    return nastLosLiczba;
}

int BBS::getLosBit() {
    return this->getLosLiczbe() % 2;
}

void BBS::setP(long int p) {
    this->p = p;
}

void BBS::setQ(long int q) {
    this->q = q;
}

void BBS::setZiarno(long int ziarno) {
    this->x0 = ziarno;
}