#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Brush_LightPaintSubtractive {
    IL2CPP_REGISTER_METHOD(0x0308DF50, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0308E460, void, Paint, ())
    IL2CPP_REGISTER_METHODINFO(0x0472BF20, P3D_Brush_LightPaintSubtractive_Paint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0308EAF0, app::Texture2D *, InitTextureIfNeeded, (app::Texture2D * texture, int32_t main_tex_width, int32_t main_tex_height))
    IL2CPP_REGISTER_METHOD(0x0308EE10, void, cctor, ())
}
