#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::P3D_Painter {
    IL2CPP_REGISTER_METHOD(0x030961C0, app::P3D_Painter*, get_TempInstance, ())
    IL2CPP_REGISTER_METHOD(0x030963C0, bool, get_IsReady, (app::P3D_Painter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030964A0, void, SetCanvas, (app::P3D_Painter * this_ptr, app::RenderTexture* new_texture, app::Vector2 new_tiling, app::Vector2 new_offset))
    IL2CPP_REGISTER_METHOD(0x030964E0, bool, Paint_1, (app::P3D_Painter * this_ptr, app::P3D_Brush* brush, app::List_1_P3D_Result_* results, app::P3D_CoordType__Enum coord))
    IL2CPP_REGISTER_METHOD(0x030965F0, bool, Paint_2, (app::P3D_Painter * this_ptr, app::P3D_Brush* brush, app::P3D_Result* result, app::P3D_CoordType__Enum coord))
    IL2CPP_REGISTER_METHOD(0x03096640, bool, Paint_3, (app::P3D_Painter * this_ptr, app::P3D_Brush* brush, app::Vector2 uv))
    IL2CPP_REGISTER_METHOD(0x030968D0, bool, Paint_4, (app::P3D_Painter * this_ptr, app::P3D_Brush* brush, float x, float y))
    IL2CPP_REGISTER_METHOD(0x03096AD0, bool, Paint_5, (app::P3D_Painter * this_ptr, app::P3D_Brush* brush, app::P3D_Matrix matrix))
    IL2CPP_REGISTER_METHOD(0x03096BE0, void, Apply, (app::P3D_Painter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03096CA0, void, ctor, (app::P3D_Painter * this_ptr))
} // namespace app::classes::P3D_Painter
