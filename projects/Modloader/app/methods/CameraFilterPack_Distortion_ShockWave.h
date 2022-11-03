#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Distortion_ShockWave {
    IL2CPP_REGISTER_METHOD(0x024EB2B0, app::Material*, get_material, (app::CameraFilterPack_Distortion_ShockWave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EB490, void, Start, (app::CameraFilterPack_Distortion_ShockWave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EB610, void, OnRenderImage, (app::CameraFilterPack_Distortion_ShockWave * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024EB9E0, void, OnValidate, (app::CameraFilterPack_Distortion_ShockWave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EBA80, void, Update, (app::CameraFilterPack_Distortion_ShockWave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EBB20, void, OnDisable, (app::CameraFilterPack_Distortion_ShockWave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2E10, void, ctor, (app::CameraFilterPack_Distortion_ShockWave * this_ptr))
} // namespace app::classes::CameraFilterPack_Distortion_ShockWave
