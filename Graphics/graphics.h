#ifndef __GRAPHICS__
#define __GRAPHICS__

#include "include/color.h"
#include "include/point.hpp"
#include "include/rect.hpp"

#include "SPI.h"
#include "include/Adafruit_GFX.h"
#include "include/ILI9488.h"

#define TFT_CS         PA1
#define TFT_DC         PB3
#define TFT_LED        PB0
#define TFT_RST        PB4

ILI9488 tft = ILI9488(TFT_CS, TFT_DC, TFT_RST);

#endif /* __GRAPHICS__ */