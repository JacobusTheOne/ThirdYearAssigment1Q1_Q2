#include <QCoreApplication>
#include <QTextStream>
#include <QList>
#include "vehicle.h"
#include "transport.h"
#include "passenger.h"
#include "filewriter.h"

static QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject bunch;

    bunch.setObjectName("Bunch of stack objects:");
    Vehicle *bossCar = new Transport("bossCar",&bunch);
    Vehicle *bossWife = new Passenger("bossWife",&bunch);
    Vehicle *employeeOne = new Transport("employeeOne",bossCar);
    Vehicle *houseladyOne =new Passenger("houseladyOne",bossWife);
    cout << "Object tree info: " << endl;
    bunch.dumpObjectTree();
    QObjectList *list = new QObjectList(bunch.children());
    FileWriter file(list,"vehicle.txt");
    QList<Vehicle*> listVehicles;

    listVehicles.append(bossCar);
    listVehicles.append(bossWife);
    listVehicles.append(employeeOne);
    listVehicles.append(houseladyOne);

    for(int i = 0; i < listVehicles.size();i++)
    {
        cout << listVehicles.at(i)->getAllinfo()  << endl;
    }

    cout << endl;
    cout << "Number of properties written to file: " << file.write() << endl;


    return a.exec();
}
