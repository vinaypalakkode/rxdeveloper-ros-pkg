#ifndef LAUNCHFILEWRITER_H
#define LAUNCHFILEWRITER_H


#include "tagItems/envItem.h"
#include "tagItems/argItem.h"
#include "tinyxml.h"
#include "tagItems/remapArrow.h"

class LaunchWriter
{
public:
    void createDocument(QString file, QList<QGraphicsItem *> &list);
private:
    bool project;
private slots:
    //begin launchfilewriter
    void create_commentTag(TiXmlElement &elem,QString comment);
    void create_groupTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_machineTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_includeTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_nodeTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_paramTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_paramTag(TiXmlElement &elem, ParameterItem &item);

    void create_envTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_envTag(TiXmlElement &elem, EnvItem &env);

    void create_argTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_argTag(TiXmlElement &elem, ArgItem &arg);

    void create_remapTag(TiXmlElement &elem, QGraphicsItem &item);
    void create_remapTag(TiXmlElement &elem, RemapItem &remap);

};


#endif // LAUNCHFILEWRITER_H





