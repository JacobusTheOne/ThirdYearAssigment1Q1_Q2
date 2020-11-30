#include "passenger.h"

Passenger::Passenger(QString name,QObject *parent):Vehicle(name,parent)
{
    m_passengers = "None";
}

void Passenger::setPassengers(QString passengers)
{
    m_passengers = passengers;
}

QString Passenger::getPassengers()
{
    return m_passengers;
}

QString Passenger::getAllinfo()
{
    QString list;
    list = Vehicle::getAllinfo();
    list.append("Max Passengers:" + m_passengers);
    return list;
}
