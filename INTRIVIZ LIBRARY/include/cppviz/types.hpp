#pragma once

#include <cstdint>

namespace cppviz {

struct Color {
    std::uint8_t r = 0; // 0..255
    std::uint8_t g = 0;
    std::uint8_t b = 0;
};

struct PointI {
    int x = 0; // pixel position
    int y = 0;
};

struct PointD {
    double x = 0.0; // data position
    double y = 0.0;
};

struct Rect {
    int x = 0; // top-left x
    int y = 0; // top-left y
    int w = 0; // width
    int h = 0; // height
};

struct Margins {
    int left   = 70; // space around the plot area
    int right  = 20;
    int top    = 40;
    int bottom = 60;
};

bool operator==(const Color& a, const Color& b);
bool operator!=(const Color& a, const Color& b);

} // namespace cppviz