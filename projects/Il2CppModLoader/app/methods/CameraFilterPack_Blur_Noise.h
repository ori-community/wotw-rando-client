#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blur_Noise {
    IL2CPP_REGISTER_METHOD(0x024D2C20, app::Material*, get_material, (app::CameraFilterPack_Blur_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2E00, void, Start, (app::CameraFilterPack_Blur_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D2F90, void, OnRenderImage, (app::CameraFilterPack_Blur_Noise * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D33A0, void, OnValidate, (app::CameraFilterPack_Blur_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D3450, void, Update, (app::CameraFilterPack_Blur_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D3500, void, OnDisable, (app::CameraFilterPack_Blur_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D35E0, void, ctor, (app::CameraFilterPack_Blur_Noise * this_ptr))
} // namespace app::classes::CameraFilterPack_Blur_Noise
