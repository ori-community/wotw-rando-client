#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blur_Radial.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_Radial {
    IL2CPP_REGISTER_METHOD(0x024D3600, app::Material*, get_material, app::CameraFilterPack_Blur_Radial* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D37E0, void, Start, app::CameraFilterPack_Blur_Radial* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D3960,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blur_Radial* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024D3D30, void, OnValidate, app::CameraFilterPack_Blur_Radial* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D3DD0, void, Update, app::CameraFilterPack_Blur_Radial* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D3E70, void, OnDisable, app::CameraFilterPack_Blur_Radial* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D3F50, void, ctor, app::CameraFilterPack_Blur_Radial* this_ptr)
} // namespace app::classes::CameraFilterPack_Blur_Radial
