#include "../include/rect.hpp"

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

bool Rectangle::isEmpty()
{
    return (this->width() == 0 || this->height() == 0);
}

void Rectangle::setOrigin(Point origin)
{
    m_x = origin.x();
    m_y = origin.y();
}

void Rectangle::setSize(int width, int height)
{
    m_width = width;
    m_height = height;
}

Rectangle Rectangle::movedTo(Point p)
{
    return Rectangle(p.x(), p.y(), width(), height());
}

bool Rectangle::intersects(const Rectangle &other)
{
    return (
        other.right() >= left() &&
        other.left() <= right() &&
        other.top() <= bottom() &&
        other.bottom() >= top());
}

bool Rectangle::containsPoint(Point p)
{
    return (p.x() >= x() && p.x() <= right() && p.y() >= y() && p.y() <= bottom());
}

bool Rectangle::containsRectangle(const Rectangle &other)
{
    if (other.isEmpty()) 
    {
        return true;
    }

    if (isEmpty()) 
    {
        return false;
    }

    return ( containsPoint(other.topLeft()) && containsPoint(other.bottomRight()) );
}