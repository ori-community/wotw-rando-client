#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Vision_Tunnel {
    IL2CPP_REGISTER_METHOD(0x020FA020, app::Material*, get_material, (app::CameraFilterPack_Vision_Tunnel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FA200, void, Start, (app::CameraFilterPack_Vision_Tunnel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FA380, void, OnRenderImage, (app::CameraFilterPack_Vision_Tunnel * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020FA750, void, OnValidate, (app::CameraFilterPack_Vision_Tunnel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FA7F0, void, Update, (app::CameraFilterPack_Vision_Tunnel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FA890, void, OnDisable, (app::CameraFilterPack_Vision_Tunnel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FA970, void, ctor, (app::CameraFilterPack_Vision_Tunnel * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Tunnel
