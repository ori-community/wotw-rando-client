#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Retro_Loading {
    IL2CPP_REGISTER_METHOD(0x0248B2C0, app::Material*, get_material, (app::CameraFilterPack_Retro_Loading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248B4A0, void, Start, (app::CameraFilterPack_Retro_Loading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248B610, void, OnRenderImage, (app::CameraFilterPack_Retro_Loading * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0248B930, void, OnValidate, (app::CameraFilterPack_Retro_Loading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248B9C0, void, Update, (app::CameraFilterPack_Retro_Loading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0248BA50, void, OnDisable, (app::CameraFilterPack_Retro_Loading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_Retro_Loading * this_ptr))
} // namespace app::classes::CameraFilterPack_Retro_Loading
