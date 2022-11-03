#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_BigFace {
    IL2CPP_REGISTER_METHOD(0x024E4580, app::Material*, get_material, (app::CameraFilterPack_Distortion_BigFace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E4760, void, Start, (app::CameraFilterPack_Distortion_BigFace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E48D0, void, OnRenderImage, (app::CameraFilterPack_Distortion_BigFace * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E4C30, void, OnValidate, (app::CameraFilterPack_Distortion_BigFace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E4CC0, void, Update, (app::CameraFilterPack_Distortion_BigFace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E4D50, void, OnDisable, (app::CameraFilterPack_Distortion_BigFace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E4E30, void, ctor, (app::CameraFilterPack_Distortion_BigFace * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_BigFace
