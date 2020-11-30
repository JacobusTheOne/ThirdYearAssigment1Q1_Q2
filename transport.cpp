#include "transport.h"

Transport::Transport()
{
    m_weight = "None";
}

Transport::Transport(QString name, QObject *parent):Vehicle(name,parent)
{
    m_weight = "None";
}

void Transport::setWeight(QString weight)
{
    m_weight = weight;
}

QString Transport::getWeight()
{
     return m_weight;
}

QString Transport::getAllinfo()
{
    QString list;
    list = Vehicle::getAllinfo();
    list.append("Maximum weight: " + m_weight);
    return list;
}
