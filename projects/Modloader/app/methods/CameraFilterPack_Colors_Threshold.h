#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Colors_Threshold.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_Threshold {
    IL2CPP_REGISTER_METHOD(0x024E3440, app::Material*, get_material, app::CameraFilterPack_Colors_Threshold* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E3620, void, Start, app::CameraFilterPack_Colors_Threshold* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024E3790,
        void,
        OnRenderImage,
        app::CameraFilterPack_Colors_Threshold* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024E39D0, void, OnValidate, app::CameraFilterPack_Colors_Threshold* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E3A60, void, Update, app::CameraFilterPack_Colors_Threshold* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E3AF0, void, OnDisable, app::CameraFilterPack_Colors_Threshold* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E3BD0, void, ctor, app::CameraFilterPack_Colors_Threshold* this_ptr)
} // namespace app::classes::CameraFilterPack_Colors_Threshold
