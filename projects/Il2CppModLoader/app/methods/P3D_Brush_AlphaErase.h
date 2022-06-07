#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Brush_AlphaErase {
    IL2CPP_REGISTER_METHOD(0x0308A970, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308ACB0, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x0308AEA0, void, cctor, ())
}
