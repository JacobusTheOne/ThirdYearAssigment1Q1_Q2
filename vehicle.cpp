#include "vehicle.h"

Vehicle::Vehicle()
{
    m_model = "None";
    m_year = "None";
}

Vehicle::Vehicle(QString name, QObject *parent):QObject(parent)
{
    setObjectName(name);
    m_model = "None";
    m_year = "None";
}

void Vehicle::setYear(QString year)
{
    m_year = year;
}

void Vehicle::setModel(QString model)
{
    m_model = model;
}

QString Vehicle::getYear()
{
    return m_year;
}

QString Vehicle::getModel()
{
    return m_model;
}

QString Vehicle::getAllinfo()
{
    QString list;
    list.append("Vehicle model: " + m_model);
    list.append(" || Year: " + m_year + " || ");
    return list;
}
