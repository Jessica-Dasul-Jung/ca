


#include "calc.h"

Calc::Calc()
{
    //default schema = A
    m_schema = SCHEMA_A;

}

void Calc::setSchema(int schema)
{
    m_schema = schema;
}

int Calc::calcuateScore(int hw[], int mt[], int final)
{
    copyData(hw, mt, final);
    if (m_schema == SCHEMA_A)
        return calculateA();
    else return calculateB();
}

void Calc::copyData(int hw[], int mt[], int final)
{
    for (int i = 0; i < HW_NUM; i++)
    {
        m_hw[i] = hw[i];
    }

    m_mt[0] = mt[0];
    m_mt[1] = mt[1];
    m_final = final;

}

int Calc::calculateA()
{

}

int Calc::calculateB()
{

}
