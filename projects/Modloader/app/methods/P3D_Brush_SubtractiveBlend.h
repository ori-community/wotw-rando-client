#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::P3D_Brush_SubtractiveBlend {
    IL2CPP_REGISTER_METHOD(0x0308F2C0, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308F770, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x03090110, void, cctor, ())
} // namespace app::classes::P3D_Brush_SubtractiveBlend
