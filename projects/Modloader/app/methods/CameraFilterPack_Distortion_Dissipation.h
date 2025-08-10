#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Distortion_Dissipation.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_Dissipation {
    IL2CPP_REGISTER_METHOD(0x024E5840, app::Material*, get_material, app::CameraFilterPack_Distortion_Dissipation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E5A20, void, Start, app::CameraFilterPack_Distortion_Dissipation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024E5BA0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Distortion_Dissipation* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024E5F70, void, OnValidate, app::CameraFilterPack_Distortion_Dissipation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E6010, void, Update, app::CameraFilterPack_Distortion_Dissipation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E60B0, void, OnDisable, app::CameraFilterPack_Distortion_Dissipation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E1140, void, ctor, app::CameraFilterPack_Distortion_Dissipation* this_ptr)
} // namespace app::classes::CameraFilterPack_Distortion_Dissipation
