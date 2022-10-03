#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_LED {
    IL2CPP_REGISTER_METHOD(0x020E9B20, app::Material*, get_material, (app::CameraFilterPack_TV_LED * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9D00, void, Start, (app::CameraFilterPack_TV_LED * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9E50, void, OnRenderImage, (app::CameraFilterPack_TV_LED * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_LED * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EA1B0, void, OnDisable, (app::CameraFilterPack_TV_LED * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EA290, void, ctor, (app::CameraFilterPack_TV_LED * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_LED
