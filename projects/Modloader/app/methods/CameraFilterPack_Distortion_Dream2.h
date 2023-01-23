#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Dream2.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Distortion_Dream2 {
    IL2CPP_REGISTER_METHOD(0x024E6920, app::Material*, get_material, (app::CameraFilterPack_Distortion_Dream2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E6B00, void, Start, (app::CameraFilterPack_Distortion_Dream2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E6C70, void, OnRenderImage, (app::CameraFilterPack_Distortion_Dream2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E6FD0, void, OnValidate, (app::CameraFilterPack_Distortion_Dream2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E7060, void, Update, (app::CameraFilterPack_Distortion_Dream2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E70F0, void, OnDisable, (app::CameraFilterPack_Distortion_Dream2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E71D0, void, ctor, (app::CameraFilterPack_Distortion_Dream2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Dream2
