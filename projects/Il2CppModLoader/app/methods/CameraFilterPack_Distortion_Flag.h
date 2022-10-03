#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Flag {
    IL2CPP_REGISTER_METHOD(0x024E7B80, app::Material*, get_material, (app::CameraFilterPack_Distortion_Flag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E7D60, void, Start, (app::CameraFilterPack_Distortion_Flag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E7ED0, void, OnRenderImage, (app::CameraFilterPack_Distortion_Flag * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E8270, void, OnValidate, (app::CameraFilterPack_Distortion_Flag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E8300, void, Update, (app::CameraFilterPack_Distortion_Flag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E8390, void, OnDisable, (app::CameraFilterPack_Distortion_Flag * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_Distortion_Flag * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Flag
