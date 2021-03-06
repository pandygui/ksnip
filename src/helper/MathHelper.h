/*
 * Copyright (C) 2017 Damir Porobic <https://github.com/damirporobic>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef MATHHELPER_H
#define MATHHELPER_H

#include <QtMath>
#include <QPointF>
#include <QRect>
#include <QLine>

class MathHelper
{
public:
    static qreal distanceBetweenPoints(const QPointF& point1, const QPointF& point2);
    static QPointF getBeginOfRounding(const QPointF& point1, const QPointF& point2);
    static QPointF getEndOfRounding(const QPointF& point1, const QPointF& point2);
    static qreal smallerValue(qreal value1, qreal value2);
    static QRect getRectBetweenTwoPoints(const QPoint& point1, const QPoint& point2);
    static QPoint getLineCenter(const QLine &line);
    static QPoint getCenterBetweenPoints(const QPoint &p1, const QPoint &p2);
    static qreal roundAngleTo(const qreal currentAngle, const int increments);
    static int randomInt();
};

#endif // MATHHELPER_H
