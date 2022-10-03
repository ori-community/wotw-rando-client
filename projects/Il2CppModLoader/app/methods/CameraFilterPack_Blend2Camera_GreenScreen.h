#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_GreenScreen {
    IL2CPP_REGISTER_METHOD(0x0274C840, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274CA20, void, Start, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274CE10, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02743170, void, Update, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274D240, void, OnEnable, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274D250, void, OnDisable, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274D440, void, ctor, (app::CameraFilterPack_Blend2Camera_GreenScreen * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_GreenScreen
