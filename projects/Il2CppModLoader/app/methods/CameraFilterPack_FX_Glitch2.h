#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_FX_Glitch2 {
    IL2CPP_REGISTER_METHOD(0x0246E530, app::Material*, get_material, (app::CameraFilterPack_FX_Glitch2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246E710, void, Start, (app::CameraFilterPack_FX_Glitch2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246E880, void, OnRenderImage, (app::CameraFilterPack_FX_Glitch2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246EBA0, void, OnValidate, (app::CameraFilterPack_FX_Glitch2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246EC30, void, Update, (app::CameraFilterPack_FX_Glitch2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246ECC0, void, OnDisable, (app::CameraFilterPack_FX_Glitch2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C2D0, void, ctor, (app::CameraFilterPack_FX_Glitch2 * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Glitch2
