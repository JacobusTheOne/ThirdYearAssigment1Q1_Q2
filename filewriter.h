#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <QObject>

class FileWriter
{
public:
    FileWriter(QObjectList* olist, QString fname);
    int write();
private:
    QObjectList* list;
    QString filename;
};

#endif // FILEWRITER_H
