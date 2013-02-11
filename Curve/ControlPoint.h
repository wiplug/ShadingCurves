#ifndef CONTROLPOINT_H
#define CONTROLPOINT_H

#include <QList>
#include <QPointF>
#include <QVector>

class BSplineGroup;
class BSpline;

class ControlPoint : public QPointF
{
public:
    ControlPoint();
    ControlPoint(QPointF val);

    BSpline& splineAt(int index);

    int count()
    {
        return connected_splines.size();
    }

public:
    BSplineGroup *m_splineGroup;
    QVector<int> connected_splines;
    int idx;

private:
};

#endif // CONTROLPOINT_H
