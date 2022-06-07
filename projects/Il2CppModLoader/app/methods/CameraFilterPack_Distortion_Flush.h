#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Distortion_Flush {
    IL2CPP_REGISTER_METHOD(0x024E8470, app::Material *, get_material, (app::CameraFilterPack_Distortion_Flush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E8650, void, Start, (app::CameraFilterPack_Distortion_Flush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E87D0, void, OnRenderImage, (app::CameraFilterPack_Distortion_Flush * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E8BA0, void, OnValidate, (app::CameraFilterPack_Distortion_Flush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E8C40, void, Update, (app::CameraFilterPack_Distortion_Flush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E8CE0, void, OnDisable, (app::CameraFilterPack_Distortion_Flush * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EAC00, void, ctor, (app::CameraFilterPack_Distortion_Flush * this_ptr))
}
