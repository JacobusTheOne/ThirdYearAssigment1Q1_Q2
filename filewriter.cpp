#include "filewriter.h"
#include <QMetaProperty>
#include <QFile>
#include <QTextStream>

FileWriter::FileWriter(QObjectList *olist, QString fname):list(olist),filename(fname)
{

}

int FileWriter::write()
{

    QStringList result;
    QString buildResult;
    int countOfProperties = 0;
    QFile file(filename);
    file.open(QIODevice::Append);
    QTextStream out(&file);


    for (int loop=0; loop < list->size(); loop++)
    {
        buildResult = "";
        const QMetaObject* meta = list->at(loop)->metaObject();

        for (int count=1; count<meta->propertyCount(); count++)
        {
            countOfProperties += 1;
            const QMetaProperty prop = meta->property(count);
            QString name = prop.name();
            QVariant value = prop.read(list->at(loop));
            QString val = value.toString();
            buildResult += QString(name + ": " + val + "; ");
        }
        result << buildResult;
    }
    for(int i = 0;i < result.size();i++)
    {
     out << result.at(i) << endl;
    }
    file.close();
    return countOfProperties;
}
