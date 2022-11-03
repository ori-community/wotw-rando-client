#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::P3D_Brush_AlphaBlendRGB {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x0308A890, app::Color, Blend, (app::Color old, app::Color add))
} // namespace app::classes::P3D_Brush_AlphaBlendRGB
