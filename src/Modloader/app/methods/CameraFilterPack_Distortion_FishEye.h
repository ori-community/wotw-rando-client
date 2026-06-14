#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Distortion_FishEye.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_FishEye {
    IL2CPP_REGISTER_METHOD(0x024E71F0, app::Material*, get_material, app::CameraFilterPack_Distortion_FishEye* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E73D0, void, Start, app::CameraFilterPack_Distortion_FishEye* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024E7570,
        void,
        OnRenderImage,
        app::CameraFilterPack_Distortion_FishEye* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024E7890, void, OnValidate, app::CameraFilterPack_Distortion_FishEye* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E7950, void, Update, app::CameraFilterPack_Distortion_FishEye* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E7A00, void, OnDisable, app::CameraFilterPack_Distortion_FishEye* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E7AE0, void, ctor, app::CameraFilterPack_Distortion_FishEye* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E7B00, void, cctor, )
} // namespace app::classes::CameraFilterPack_Distortion_FishEye
