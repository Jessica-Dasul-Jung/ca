


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

double Calc::calcuateScore(int hw[], int mt[], int final)
{
    copyData(hw, mt, final);

    //drop lowest score:
    int min = 0;
    for (int i = 0; i < HW_NUM; i++)
    {
        if (m_hw[min] > m_hw[i])
            min = i;
    }
    m_lowestindex = min;

    //calculate homework score:
    m_hwscore = 0;
    for (int i = 0; i < HW_NUM; i++)
    {
        if (i != m_lowestindex)
            m_hwscore += m_hw[i];
    }
    m_hwscore = (m_hwscore / 7) * 0.25;

    //calculate the rest:
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

double Calc::calculateA()
{
    double mt1 = m_mt[0] * 0.2;
    double mt2 = m_mt[1] * 0.2;
    double final = m_final * 0.35;

    double overall = m_hwscore + mt1 + mt2 + final;
    return overall;
}

double Calc::calculateB()
{
    double mt;
    if (m_mt[0] > m_mt[1])
        mt = m_mt[0];
    else mt = m_mt[1];

    mt = mt * 0.3;
    double final = m_final * 0.45;

    double overall = m_hwscore + mt + final;
    return overall;
}
