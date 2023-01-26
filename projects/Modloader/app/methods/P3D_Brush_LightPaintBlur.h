#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::P3D_Brush_LightPaintBlur {
    IL2CPP_REGISTER_METHOD(0x0308BF50, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308C460, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x0308CAF0, app::Texture2D*, InitTextureIfNeeded, (app::Texture2D * texture, int32_t main_tex_width, int32_t main_tex_height))
    IL2CPP_REGISTER_METHOD(0x0308CE10, void, cctor, ())
} // namespace app::classes::P3D_Brush_LightPaintBlur
