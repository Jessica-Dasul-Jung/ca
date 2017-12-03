#ifndef CALC_H
#define CALC_H

#include "globals.h"

class Calc
{
public:
    Calc();
    void setSchema(int schema);
    int calcuateScore(int hw[], int mt[], int final);
    void copyData(int hw[], int mt[], int final);
    int calculateA();
    int calculateB();

private:
    int m_schema;
    int m_hw[HW_NUM];
    int m_mt[2];
    int m_final;


};

#endif // CALC_H
