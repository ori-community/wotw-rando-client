#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Brush_LightPaintAdditive {
    IL2CPP_REGISTER_METHOD(0x0308AF50, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308B460, void, Paint, ())
    IL2CPP_REGISTER_METHODINFO(0x0477DC08, P3D_Brush_LightPaintAdditive_Paint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0308BAF0, app::Texture2D *, InitTextureIfNeeded, (app::Texture2D * texture, int32_t main_tex_width, int32_t main_tex_height))
    IL2CPP_REGISTER_METHOD(0x0308BE10, void, cctor, ())
}
