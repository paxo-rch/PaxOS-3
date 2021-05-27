#ifndef __BUTTON__
#define __BUTTON__

#include <string>
#include "../../Graphics/include/gfxfont.h"
#include "../../Graphics/include/color.h"

#include "../../Graphics/Fonts/FreeSans12pt7b.h"

// todo : gérer les polices

/**
 * @param width
 * @param height
 * @param font
 * @param fontColor
 * @param backgroundColor
 * @param xPosition
 * @param yPosition
 * @param innerText
 *
*/

#define BUTTON_DEFAULT_FONT_COLOR BLACK
#define BUTTON_DEFAULT_BACKGROUD_COLOR WHITE

class button
{
    public:
        button(int width, int height, int x, int y, std::string inner_text, color_t font_color, color_t background_color = 000000, GFXfont font = FreeSans12pt7b) : m_width(width), m_height(height), m_x(x), m_y(y), m_inner_text(inner_text), m_font_color(font_color), m_background_color(background_color), m_font(font)
        {
            // empty
        }




    private:
        int m_x;
        int m_y;

        int m_width;
        int m_height;

        std::string m_inner_text;
        color_t m_background_color;
        color_t m_font_color;

        GFXfont m_font;

};

#endif /* __BUTTON__ */
