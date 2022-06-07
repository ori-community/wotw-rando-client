#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_VHS_Tracking {
    IL2CPP_REGISTER_METHOD(0x020F39F0, app::Material *, get_material, (app::CameraFilterPack_VHS_Tracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F3BD0, void, Start, (app::CameraFilterPack_VHS_Tracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F3D40, void, OnRenderImage, (app::CameraFilterPack_VHS_Tracking * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F4060, void, OnValidate, (app::CameraFilterPack_VHS_Tracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F40F0, void, Update, (app::CameraFilterPack_VHS_Tracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F4180, void, OnDisable, (app::CameraFilterPack_VHS_Tracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_VHS_Tracking * this_ptr))
}
