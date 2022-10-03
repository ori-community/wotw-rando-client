#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blur_GaussianBlur {
    IL2CPP_REGISTER_METHOD(0x024D1840, app::Material*, get_material, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1A20, void, Start, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1B90, void, OnRenderImage, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D1F30, void, OnValidate, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1FC0, void, Update, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2050, void, OnDisable, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2130, void, ctor, (app::CameraFilterPack_Blur_GaussianBlur * this_ptr))
} // namespace app::classes::CameraFilterPack_Blur_GaussianBlur
