#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_Heat {
    IL2CPP_REGISTER_METHOD(0x024E97B0, app::Material*, get_material, (app::CameraFilterPack_Distortion_Heat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9990, void, Start, (app::CameraFilterPack_Distortion_Heat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9B00, void, OnRenderImage, (app::CameraFilterPack_Distortion_Heat * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E9E20, void, OnValidate, (app::CameraFilterPack_Distortion_Heat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9EB0, void, Update, (app::CameraFilterPack_Distortion_Heat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E9F40, void, OnDisable, (app::CameraFilterPack_Distortion_Heat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EA020, void, ctor, (app::CameraFilterPack_Distortion_Heat * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_Heat
