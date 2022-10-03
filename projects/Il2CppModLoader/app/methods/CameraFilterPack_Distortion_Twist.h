#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Twist {
    IL2CPP_REGISTER_METHOD(0x024EBC00, app::Material*, get_material, (app::CameraFilterPack_Distortion_Twist * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EBDE0, void, Start, (app::CameraFilterPack_Distortion_Twist * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EBF30, void, OnRenderImage, (app::CameraFilterPack_Distortion_Twist * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Distortion_Twist * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EC380, void, OnDisable, (app::CameraFilterPack_Distortion_Twist * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2E10, void, ctor, (app::CameraFilterPack_Distortion_Twist * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Twist
