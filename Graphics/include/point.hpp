#ifndef __POINT__
#define __POINT__

class Point 
{
    public:
        Point(int x, int y) : m_x(x), m_y(y)  { /* empty  */ }
        Point() : m_x(0), m_y(0) { /* empty to */ }

        int x() const { return m_x; }
        int y() const { return m_y; }

        bool operator ==(const Point &other) const 
        {
            return (m_x == other.m_x && m_y == other.m_y);
        }

        bool operator !=(const Point &other) const 
        {
            return !(operator ==(other));
        }

        /****************** Peut être inutile **************************/

        Point operator+(const Point &other) const
        {
            return Point(this->m_x + other.m_x, this->m_y + other.m_y);
        }

        Point operator-(const Point &other) const
        {
            return Point(this->m_x - other.m_x, this->m_y - other.m_y);
        }

        /**************************************************************/


    private:
        int m_x;
        int m_y;
};

#endif /* __POINT__ */