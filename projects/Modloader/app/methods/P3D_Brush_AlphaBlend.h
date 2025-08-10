#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::P3D_Brush_AlphaBlend {
    IL2CPP_REGISTER_METHOD(0x03089930, void, Initialize, )
    IL2CPP_REGISTER_METHOD(0x03089DE0, void, Paint, )
    IL2CPP_REGISTER_METHOD(0x0308A780, void, cctor, )
} // namespace app::classes::P3D_Brush_AlphaBlend
