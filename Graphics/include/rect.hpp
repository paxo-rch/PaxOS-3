#ifndef __Rectangle__
#define __Rectangle__

#include "point.hpp"

class Rectangle
{
    public:
        Rectangle(int x, int y, int width, int height) : m_x(x), m_y(y), m_width(width), m_height(height)
        {
            // empty
        }

        Rectangle(int width, int height) : m_width(width), m_height(height)
        {
            // empty
        }

        int x(void){ return m_x; }
        int y(void){ return m_y; }

        // int origin
        int width(void){ return m_width; }
        int height(void){ return m_height; };

        bool operator ==(const Rectangle &other) 
        {
            return (m_x == other.m_x && m_y == other.m_y && m_width == other.m_width && m_height == other.m_height);
        }

        bool operator !=(const Rectangle &other) 
        {
            return !( operator ==(other) );
        }

        int top()    const { return m_y; }
        int right()  const { return m_x + m_width - 1; }
        int bottom() const { return m_y + m_height - 1; }
        int left()   const { return m_x; }

        int topLeft()     const { return Point( left(),  top() );  }
        int topRight()    const { return Point( right(), top() );  }
        int bottomLeft()  const { return Point( left(),  bottom() ); }
        int bottomRight() const { return Point( right(), bottom() ); }

        void setOrigin(Point origin);
        void setSize(int width, int height);

        Rectangle movedTo(Point p);
        bool intersects(const Rectangle & other);
        bool containsPoint(Point p);
        bool containsRectangle(const Rectangle & other);
        bool isEmpty();


    private:
        int m_width;
        int m_height;

        // (x,y) position of the Rectangleange
        int m_x;
        int m_y;
}

#endif /* __Rectangle__ */