#include "waypointmaster.h"
#include <QDomNodeList>
#include <QDomNode>
#include <QDebug>

WayPoint::WayPoint(QObject *parent) :
    QObject(parent)
{
}

//<wpt lat="52.0848" lon="5.22841">
//<ele>5</ele>
//<name>Chris</name>
//</wpt>

WayPoint::WayPoint(QDomElement *node, QObject *parent) :
    QObject(parent)
{
    QDomNodeList nl = node->childNodes();

    QDomNamedNodeMap nm = node->attributes();

    if(nm.contains("lat"))
    {
        Latitude = nm.namedItem("lat").nodeValue();
        qDebug() << "lat = " << Latitude;
        qDebug() << "lat = " << nm.namedItem("lat").nodeValue();
    }
    if(nm.contains("lon"))
    {
        Longitude = nm.namedItem("lon").nodeValue();
    }

    //Handle all child nodes
    for(int i=0; i<nl.count(); i++)
    {
        //Check node type by name and store to the right attribute
        QDomNode currNode = nl.at(i);
        if(currNode.nodeName() == "ele")
                Altitude = currNode.nodeValue();
        else if (currNode.nodeName() == "name")
                LocationName = currNode.nodeValue();

    }


}
