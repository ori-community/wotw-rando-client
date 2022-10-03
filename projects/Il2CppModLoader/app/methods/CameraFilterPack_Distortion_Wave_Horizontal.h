#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Wave_Horizontal {
    IL2CPP_REGISTER_METHOD(0x024ED700, app::Material*, get_material, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ED8E0, void, Start, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EDA50, void, OnRenderImage, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024EDDF0, void, OnValidate, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EDE80, void, Update, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EDF10, void, OnDisable, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477280, void, ctor, (app::CameraFilterPack_Distortion_Wave_Horizontal * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Wave_Horizontal
