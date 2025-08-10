#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/P3D_Brush.h>
#include <Modloader/app/structs/P3D_Matrix.h>
#include <Modloader/app/structs/P3D_Rect.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::P3D_Brush {
    IL2CPP_REGISTER_METHOD(0x03087690, app::P3D_Brush*, get_TempInstance, )
    IL2CPP_REGISTER_METHOD(0x030878A0, app::Object*, get_ExtraData, app::P3D_Brush* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03087920, void, set_ExtraData, app::P3D_Brush* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x030879B0, app::P3D_Brush*, GetTempClone, app::P3D_Brush* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03087B70, void, CopyTo, app::P3D_Brush* this_ptr, app::P3D_Brush* other)
    IL2CPP_REGISTER_METHOD(0x03087CA0, void, Paint, app::P3D_Brush* this_ptr, app::RenderTexture* new_canvas, app::P3D_Matrix new_matrix)
    IL2CPP_REGISTER_METHOD(0x030881A0, bool, CalculateRect, app::P3D_Brush* this_ptr, app::P3D_Rect* rect)
    IL2CPP_REGISTER_METHOD(0x030884B0, bool, IsInsideShape, app::P3D_Matrix inverse_matrix, int32_t x, int32_t y, app::Vector2* shape_coord)
    IL2CPP_REGISTER_METHOD(0x03088530, app::Color, SampleRepeat, app::Texture2D* texture, float u, float v)
    IL2CPP_REGISTER_METHOD(0x030885C0, void, DrawRect, app::Material* material)
    IL2CPP_REGISTER_METHOD(0x03088920, void, ctor, app::P3D_Brush* this_ptr)
} // namespace app::classes::P3D_Brush
