#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_FX_EarthQuake {
    IL2CPP_REGISTER_METHOD(0x0246CC40, app::Material*, get_material, (app::CameraFilterPack_FX_EarthQuake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246CE20, void, Start, (app::CameraFilterPack_FX_EarthQuake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246CFA0, void, OnRenderImage, (app::CameraFilterPack_FX_EarthQuake * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246D370, void, OnValidate, (app::CameraFilterPack_FX_EarthQuake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246D410, void, Update, (app::CameraFilterPack_FX_EarthQuake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246D4B0, void, OnDisable, (app::CameraFilterPack_FX_EarthQuake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246D590, void, ctor, (app::CameraFilterPack_FX_EarthQuake * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_EarthQuake
