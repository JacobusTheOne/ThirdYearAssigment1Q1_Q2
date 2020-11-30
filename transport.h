#ifndef TRANSPORT_H
#define TRANSPORT_H
#include "vehicle.h"

class Transport : public Vehicle
{
    Q_OBJECT
    Q_PROPERTY(QString m_weight READ getWeight WRITE setWeight)
public:
    Transport();
    Transport(QString name, QObject *parent);
    void setWeight(QString weight);
    QString getWeight();
    QString getAllinfo();
private:
    QString m_weight;
};

#endif // TRANSPORT_H
