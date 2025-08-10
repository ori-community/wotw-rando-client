#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Distortion_Noise.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_Noise {
    IL2CPP_REGISTER_METHOD(0x024EA9C0, app::Material*, get_material, app::CameraFilterPack_Distortion_Noise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024EABA0, void, Start, app::CameraFilterPack_Distortion_Noise* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024EAD10,
        void,
        OnRenderImage,
        app::CameraFilterPack_Distortion_Noise* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024EB0B0, void, OnValidate, app::CameraFilterPack_Distortion_Noise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024EB140, void, Update, app::CameraFilterPack_Distortion_Noise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024EB1D0, void, OnDisable, app::CameraFilterPack_Distortion_Noise* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, app::CameraFilterPack_Distortion_Noise* this_ptr)
} // namespace app::classes::CameraFilterPack_Distortion_Noise
