#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Lens {
    IL2CPP_REGISTER_METHOD(0x024EA040, app::Material*, get_material, (app::CameraFilterPack_Distortion_Lens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EA220, void, Start, (app::CameraFilterPack_Distortion_Lens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EA390, void, OnRenderImage, (app::CameraFilterPack_Distortion_Lens * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024EA7A0, void, OnValidate, (app::CameraFilterPack_Distortion_Lens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EA830, void, Update, (app::CameraFilterPack_Distortion_Lens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EA8C0, void, OnDisable, (app::CameraFilterPack_Distortion_Lens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EA9A0, void, ctor, (app::CameraFilterPack_Distortion_Lens * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Lens
