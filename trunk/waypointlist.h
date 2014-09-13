#ifndef WAYPOINTLIST_H
#define WAYPOINTLIST_H

#include <QObject>
#include "QList"
#include "waypointmaster.h"


class WayPointList : public QObject
{
    Q_OBJECT
public:
    explicit WayPointList(QObject *parent = 0);

    void addWaypoint(WayPoint wp);
    void removeWaypoint(WayPoint wp);

private:
    QList<WayPoint> waypoints;

signals:

public slots:

};

#endif // WAYPOINTLIST_H
