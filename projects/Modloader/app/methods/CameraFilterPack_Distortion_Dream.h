#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Distortion_Dream.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_Dream {
    IL2CPP_REGISTER_METHOD(0x024E6190, app::Material*, get_material, app::CameraFilterPack_Distortion_Dream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E6370, void, Start, app::CameraFilterPack_Distortion_Dream* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024E64E0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Distortion_Dream* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024E6720, void, OnValidate, app::CameraFilterPack_Distortion_Dream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E67B0, void, Update, app::CameraFilterPack_Distortion_Dream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E6840, void, OnDisable, app::CameraFilterPack_Distortion_Dream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, app::CameraFilterPack_Distortion_Dream* this_ptr)
} // namespace app::classes::CameraFilterPack_Distortion_Dream
