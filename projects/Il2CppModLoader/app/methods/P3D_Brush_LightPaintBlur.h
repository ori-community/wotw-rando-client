#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Brush_LightPaintBlur {
    IL2CPP_REGISTER_METHOD(0x0308BF50, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308C460, void, Paint, ())
    IL2CPP_REGISTER_METHODINFO(0x04774048, P3D_Brush_LightPaintBlur_Paint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0308CAF0, app::Texture2D *, InitTextureIfNeeded, (app::Texture2D * texture, int32_t main_tex_width, int32_t main_tex_height))
    IL2CPP_REGISTER_METHOD(0x0308CE10, void, cctor, ())
}
