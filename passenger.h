#ifndef PASSENGER_H
#define PASSENGER_H
#include "vehicle.h"

class Passenger : public Vehicle
{
    Q_OBJECT
    Q_PROPERTY(QString m_passengers READ getPassengers WRITE setPassengers)
public:
    Passenger();
    Passenger(QString name, QObject *parent);
    void setPassengers(QString passengers);
    QString getPassengers();
    QString getAllinfo();
private:
    QString m_passengers;
};

#endif // PASSENGER_H
