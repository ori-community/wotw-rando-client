#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Triangulate {
    IL2CPP_REGISTER_METHOD(0x00B106E0, float, Area, (app::List_1_UnityEngine_Vector2_ * *contour))
    IL2CPP_REGISTER_METHOD(0x00B10810, bool, InsideTriangle, (float ax, float ay, float bx, float by, float cx, float cy, float px, float py))
    IL2CPP_REGISTER_METHOD(0x00B10930, bool, Snip, (app::List_1_UnityEngine_Vector2_ * *contour, int32_t u, int32_t v, int32_t w, int32_t n, app::List_1_System_Int32_** V))
    IL2CPP_REGISTER_METHOD(0x00B10CD0, bool, Process, (app::List_1_UnityEngine_Vector2_ * *contour, app::List_1_System_Int32_** result, bool* counter_clockwise))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Triangulate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B113A0, void, cctor, ())
} // namespace app::classes::Triangulate
