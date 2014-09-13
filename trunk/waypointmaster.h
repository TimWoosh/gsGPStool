#ifndef WAYPOINTMASTER_H
#define WAYPOINTMASTER_H

#include <QObject>
#include <QDomDocument>


//<waypointmaster>
//  <SlNo>2</SlNo>
//  <LocationName>jjj</LocationName>
//  <IconIndex>10</IconIndex>
//  <Altitude>14</Altitude>
//  <Latitude>51.234407</Latitude>
//  <Longitude>4.570313</Longitude>
//  <Remark />
//  <UID>1</UID>
//</waypointmaster>

class WayPoint : public QObject
{
    Q_OBJECT
public:
    explicit WayPoint(QObject *parent = 0);

    WayPoint(QDomElement *node, QObject *parent);
private:
    QString SlNo, LocationName, IconIndex, Altitude, Latitude, Longitude, Remark, UID;

signals:

public slots:

};

#endif // WAYPOINTMASTER_H
