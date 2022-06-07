#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Brush_AdditiveBlend {
    IL2CPP_REGISTER_METHOD(0x030889D0, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x03088E80, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x03089820, void, cctor, ())
}
