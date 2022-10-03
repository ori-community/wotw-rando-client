#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blur_Radial_Fast {
    IL2CPP_REGISTER_METHOD(0x024D3F80, app::Material*, get_material, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D4160, void, Start, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D42E0, void, OnRenderImage, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D46B0, void, OnValidate, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D4750, void, Update, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D47F0, void, OnDisable, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D3F50, void, ctor, (app::CameraFilterPack_Blur_Radial_Fast * this_ptr))
} // namespace app::classes::CameraFilterPack_Blur_Radial_Fast
