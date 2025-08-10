#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Color_BrightContrastSaturation.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Color_BrightContrastSaturation {
    IL2CPP_REGISTER_METHOD(0x024D8040, app::Material*, get_material, app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D8220, void, Start, app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D8390,
        void,
        OnRenderImage,
        app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024D8730, void, OnValidate, app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D87C0, void, Update, app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D8850, void, OnDisable, app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D8930, void, ctor, app::CameraFilterPack_Color_BrightContrastSaturation* this_ptr)
} // namespace app::classes::CameraFilterPack_Color_BrightContrastSaturation
