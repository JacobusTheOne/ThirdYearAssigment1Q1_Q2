#ifndef VEHICLE_H
#define VEHICLE_H
#include <QObject>
#include <QString>

class Vehicle : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString m_year READ getYear WRITE setYear)
    Q_PROPERTY(QString m_model READ getModel WRITE setModel)
public:
    Vehicle();
    explicit Vehicle(QString name, QObject* parent = 0);
    void setYear(QString year);
    void setModel(QString model);
    QString getYear();
    QString getModel();
    virtual QString getAllinfo();
private:
    QString m_year, m_model;
};

#endif // VEHICLE_H
