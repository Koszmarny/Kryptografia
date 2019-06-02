//
// Created by pawel on 02.06.2019.
//

#ifndef KRYPTO_BBS_H
#define KRYPTO_BBS_H
#include<cmath>
#include <iostream>

class BBS {
private:
    long int p, q, n, x0; //decryption;
public:
    BBS();
    ~BBS();
    BBS(long int p, long int q, long int ziarno);

    void setP(long int p);
    void setQ(long int q);
    void setZiarno(long int ziarno);
    int getLosBit();
    long getLosLiczbe();
    void setParametry(long int p, long int q, long int ziarno);
};


#endif //KRYPTO_BBS_H
