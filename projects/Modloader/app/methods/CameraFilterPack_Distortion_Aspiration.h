#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Aspiration.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_Aspiration {
    IL2CPP_REGISTER_METHOD(0x024E3BF0, app::Material*, get_material, (app::CameraFilterPack_Distortion_Aspiration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E3DD0, void, Start, (app::CameraFilterPack_Distortion_Aspiration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E3F50, void, OnRenderImage, (app::CameraFilterPack_Distortion_Aspiration * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E4330, void, OnValidate, (app::CameraFilterPack_Distortion_Aspiration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E43D0, void, Update, (app::CameraFilterPack_Distortion_Aspiration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E4470, void, OnDisable, (app::CameraFilterPack_Distortion_Aspiration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E4550, void, ctor, (app::CameraFilterPack_Distortion_Aspiration * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Aspiration
