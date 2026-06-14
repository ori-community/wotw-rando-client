#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CropUtility.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::CropUtility {
    IL2CPP_REGISTER_METHOD(0x00DB8610, void, CropMaterial, app::Material* material)
    IL2CPP_REGISTER_METHOD(0x00DB8820, app::Rect, GetOccupiedRectNormalized, app::Texture2D* tex)
    IL2CPP_REGISTER_METHOD(0x00DB8950, app::Rect, GetOccupiedRect, app::Texture2D* tex)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CropUtility* this_ptr)
} // namespace app::classes::CropUtility
