#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_Exclusion {
    IL2CPP_REGISTER_METHOD(0x0274B5D0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274B7B0, void, Start, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274BB70, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0274BF60, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274C250, void, Update, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274C2E0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274C5B0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0274C7A0, void, ctor, (app::CameraFilterPack_Blend2Camera_Exclusion * this_ptr))
}
