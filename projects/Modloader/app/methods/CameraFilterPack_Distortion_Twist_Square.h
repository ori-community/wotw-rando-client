#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Twist_Square {
    IL2CPP_REGISTER_METHOD(0x024EC460, app::Material*, get_material, (app::CameraFilterPack_Distortion_Twist_Square * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EC640, void, Start, (app::CameraFilterPack_Distortion_Twist_Square * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EC790, void, OnRenderImage, (app::CameraFilterPack_Distortion_Twist_Square * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Distortion_Twist_Square * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ECBE0, void, OnDisable, (app::CameraFilterPack_Distortion_Twist_Square * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024ECCC0, void, ctor, (app::CameraFilterPack_Distortion_Twist_Square * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Twist_Square
