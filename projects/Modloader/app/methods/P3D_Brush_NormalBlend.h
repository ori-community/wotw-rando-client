#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::P3D_Brush_NormalBlend {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Paint, ())
    IL2CPP_REGISTER_METHOD(0x0308EF50, app::Vector3, ColorToNormalXY, (app::Color c))
    IL2CPP_REGISTER_METHOD(0x0308EF90, app::Color, NormalToColor, (app::Vector3 n))
    IL2CPP_REGISTER_METHOD(0x0308F000, app::Vector3, ComputeZ, (app::Vector3 a))
    IL2CPP_REGISTER_METHOD(0x0308F100, app::Vector3, CombineNormalsXY_1, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x0308F150, app::Vector3, CombineNormalsXY_2, (app::Vector3 a, app::Vector3 b, float c))
    IL2CPP_REGISTER_METHOD(0x0308F1A0, app::Vector3, CombineNormalsXY_3, (app::Vector3 a, app::Vector2 b, float c))
} // namespace app::classes::P3D_Brush_NormalBlend
