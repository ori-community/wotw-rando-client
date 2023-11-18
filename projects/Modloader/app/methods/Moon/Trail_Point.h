#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Trail_Point__Boxed.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Trail_Point.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Trail_Point {
    IL2CPP_REGISTER_METHOD(0x001F9EE0, void, ctor, (app::Trail_Point__Boxed * this_ptr, app::Vector3 position, app::Vector3 tangent, app::Vector3 normal, app::Color color, float thickness, float lifetime, float u))
    IL2CPP_REGISTER_METHOD(0x0256E880, float, CatmullRom, (float p0, float p1, float p2, float p3, float t))
    IL2CPP_REGISTER_METHOD(0x0256E960, app::Color, CatmullRomColor, (app::Color p0, app::Color p1, app::Color p2, app::Color p3, float t))
    IL2CPP_REGISTER_METHOD(0x0256EEA0, app::Vector3, CatmullRom3D, (app::Vector3 p0, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3, float t))
    IL2CPP_REGISTER_METHOD(0x0256F370, app::Trail_Point, Interpolate, (app::Trail_Point a, app::Trail_Point b, app::Trail_Point c, app::Trail_Point d, float t))
    IL2CPP_REGISTER_METHOD(0x0256F950, app::Trail_Point, op_Addition, (app::Trail_Point p1, app::Trail_Point p2))
    IL2CPP_REGISTER_METHOD(0x0256FC40, app::Trail_Point, op_Subtraction, (app::Trail_Point p1, app::Trail_Point p2))
    inline app::Trail_Point operator+(app::Trail_Point p1, app::Trail_Point p2) {
        return op_Addition(p1, p2);
    }
    inline app::Trail_Point operator-(app::Trail_Point p1, app::Trail_Point p2) {
        return op_Subtraction(p1, p2);
    }
} // namespace app::classes::Moon::Trail_Point
