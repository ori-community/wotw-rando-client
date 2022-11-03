#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Vision_Warp2 {
    IL2CPP_REGISTER_METHOD(0x020FB320, app::Material*, get_material, (app::CameraFilterPack_Vision_Warp2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FB500, void, Start, (app::CameraFilterPack_Vision_Warp2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FB680, void, OnRenderImage, (app::CameraFilterPack_Vision_Warp2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020FBA50, void, OnValidate, (app::CameraFilterPack_Vision_Warp2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FBAF0, void, Update, (app::CameraFilterPack_Vision_Warp2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FBB90, void, OnDisable, (app::CameraFilterPack_Vision_Warp2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020FBC70, void, ctor, (app::CameraFilterPack_Vision_Warp2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Warp2
