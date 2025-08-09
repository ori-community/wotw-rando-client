#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Color_GrayScale.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Color_GrayScale {
    IL2CPP_REGISTER_METHOD(0x024D9A80, app::Material*, get_material, app::CameraFilterPack_Color_GrayScale* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D9C60, void, Start, app::CameraFilterPack_Color_GrayScale* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D9DB0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Color_GrayScale* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Color_GrayScale* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DA0A0, void, OnDisable, app::CameraFilterPack_Color_GrayScale* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_Color_GrayScale* this_ptr)
} // namespace app::classes::CameraFilterPack_Color_GrayScale
