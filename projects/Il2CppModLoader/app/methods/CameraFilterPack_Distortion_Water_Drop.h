#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Water_Drop {
    IL2CPP_REGISTER_METHOD(0x024ECCF0, app::Material*, get_material, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ECED0, void, Start, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ED050, void, OnRenderImage, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024ED4A0, void, OnValidate, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ED540, void, Update, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ED600, void, OnDisable, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ED6E0, void, ctor, (app::CameraFilterPack_Distortion_Water_Drop * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Water_Drop
